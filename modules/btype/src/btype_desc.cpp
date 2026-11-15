// B-Type descriptor (synth_descriptor.h): stored ranges, Edit Patch labels,
// formats, enum names and sections. Patches/BTYPE/, "B-Type" on the Synth
// page (displayName).
#include "btype.h"

#include "audio/chip_dsp.h"
#include "model/synth_patch.h"
#include "modules/synth_descriptor.h"

#include <cstring>

namespace ot {
namespace mod {

namespace {

using namespace ot::synthui;
using namespace ot::audio::btype;
namespace chip = ot::audio::chip;

// Init: a pure square from the 64 kHz clock in tune (Free), the counters
// reset at each note, no high-pass; a 4-bit ADSR (Decay 6 frames a level to
// Sustain 10, Release 2), a 4-bit DAC; the CHIP tricks off.
const PatchParamRange kParams[kParamCount] = {
    {1, 0, 2},          // Clock: 15.6 kHz / 64 kHz / 1.79 MHz
    {0, 0, 7},          // Distortion
    {0, 0, 2},          // Tuning: Free / Coarse / Fine
    {1, 0, 1},          // Poly Reset
    {0, 0, 1},          // Hi-Pass
    {1000, 50, 8000},   // HP Freq (Hz)
    {0, 0, 1},          // Osc 2 Level
    {1, -8, 8},         // Osc 2 Detune (divider steps)
    {0, 0, 7},          // Osc 2 Distortion
    {0, 0, 15},         // Attack (1/60 s frames a level)
    {6, 0, 15},         // Decay
    {10, 0, 15},        // Sustain
    {2, 0, 15},         // Release
    {1, 0, 1},          // Env Bits: Off (smooth) / On (4-bit steps)
    {0, 0, 11},         // Arp Mode
    {1, 0, 8},          // Arp Rate
    {4, 0, 24},         // Arp Note 2
    {7, 0, 24},         // Arp Note 3
    {5, 0.5f, 15},      // Vib Rate
    {0, 0, 2},          // Vib Depth
    {0.2f, 0, 1},       // Vib Delay
    {0, -24, 24},       // Slide Start
    {0.05f, 0, 1},      // Slide Time
    {0, 0, 3},          // Glide Mode (names::kGlide): Always
    {0, 0, 3},          // Glide Time
    {4, 4, 8},          // DAC Bits (8 = clean)
    {1, 0, 2},          // Volume
};

const char* const kClockName[3] = {"15.6 kHz", "64 kHz", "1.79 MHz"};
const char* const kDistName[8] = {"Pure", "Poly4", "Poly5", "Poly9", "Poly17", "Poly5x4", "Poly5x17", "Poly5x9"};
const char* const kTuneName[3] = {"Free", "Coarse", "Fine"};

#define E(n) OT_SYNTH_ENUM(n)
#define F(f) f, nullptr, 0
// [3.x] extension parameters (patch field 16): Width and Spread, 0..1, 0 = mono.
const PatchParamRange kExt[2] = {{0.0f, 0.0f, 1.0f, kParamFlagInitAbsent}, {0.0f, 0.0f, 1.0f, kParamFlagInitAbsent | kParamFlagSpread}};

const ParamUi kUi[kParamCount + 2] = {
    {"Clock", E(kClockName)},      {"Distortion", E(kDistName)},  {"Tuning", E(kTuneName)},
    {"Poly Reset", F(kFmtOnOff)},  {"Hi-Pass", F(kFmtOnOff)},     {"HP Freq", F(kFmtHz)},
    {"Level", F(kFmtPct)},         {"Detune", F(kFmtInt)},        {"Distortion", E(kDistName)},
    {"Attack", F(kFmtInt)},        {"Decay", F(kFmtInt)},         {"Sustain", F(kFmtInt)},
    {"Release", F(kFmtInt)},       {"Bits", F(kFmtOnOff)},        {"Arp Mode", E(chip::kArpNames)},
    {"Arp Rate", E(chip::kRateNames)}, {"Arp Note 2", F(kFmtSemi)}, {"Arp Note 3", F(kFmtSemi)},
    {"Vib Rate", F(kFmtLfoHz)},    {"Vib Depth", F(kFmtSemi)},    {"Vib Delay", F(kFmtSec)},
    {"Slide Start", F(kFmtSemi)},  {"Slide Time", F(kFmtSec)},    {"Glide Mode", E(names::kGlide)},
    {"Glide Time", F(kFmtSec)},    {"DAC Bits", F(kFmtInt)},      {"Volume", F(kFmtPct)},
    {"Width", F(kFmtPct)},          {"Spread", F(kFmtPct)},
};
#undef E
#undef F

const uint8_t kChan[] = {kClock, kDistortion, kTuning, kPolyReset, kHiPass, kHpFreq};
const uint8_t kOsc2[] = {kOsc2Level, kOsc2Detune, kOsc2Distortion};
const uint8_t kEnv[] = {kAttack, kDecay, kSustain, kRelease, kEnvBits};
const uint8_t kChip[] = {kArpMode, kArpRate, kArpNote2, kArpNote3, kVibRate, kVibDepth, kVibDelay, kSlideStart, kSlideTime};
const uint8_t kCtrl[] = {kGlideMode, kGlideTime, kDacBits, kVolume, uint8_t(kParamCount), uint8_t(kParamCount + 1)};

const Section kSections[] = {
    OT_SYNTH_SECTION("CHAN", "Channel", kChan), OT_SYNTH_SECTION("OSC2", "Channel 2", kOsc2),
    OT_SYNTH_SECTION("ENV", "Envelope", kEnv),  OT_SYNTH_SECTION("CHIP", "Chip Tricks", kChip),
    OT_SYNTH_SECTION("CTRL", "Controllers", kCtrl), OT_SYNTH_MACRO_SECTIONS};

// The Init patch's macros (#176): six named knobs on the chip's main
// controls, unipolar; amount 1.00 = the setting's whole range over the knob
// (Clock down from 64 kHz to 15.6 kHz).
void initPatch(SynthPatch& p) {
    struct M {
        const char* name;
        int8_t param[2];
        float amount[2];
    };
    static const M kM[6] = {{"Grit", {kDistortion, -1}, {1.0f, 0.0f}},
                            {"Clock", {kClock, -1}, {-1.0f, 0.0f}},
                            {"Decay", {kDecay, kRelease}, {1.0f, 0.6f}},
                            {"Vibrato", {kVibDepth, kVibRate}, {1.0f, 0.4f}},
                            {"Arp", {kArpMode, -1}, {1.0f, 0.0f}},
                            {"Hi-Pass", {kHiPass, kHpFreq}, {1.0f, 1.0f}}};
    for (int k = 0; k < 6; ++k) {
        PatchMacro& m = p.macros[k];
        const size_t l = std::strlen(kM[k].name);
        std::memcpy(m.name, kM[k].name, l + 1);
        m.nameLen = uint8_t(l);
        m.bipolar = false;
        m.count = 0;
        for (int j = 0; j < 2 && kM[k].param[j] >= 0; ++j) {
            m.targets[j].param = kM[k].param[j];
            std::memcpy(&m.targets[j].amountBits, &kM[k].amount[j], 4);
            m.count = uint8_t(j + 1);
        }
    }
}

}  // namespace

extern const SynthDescriptor kBtypeDescriptor;
const SynthDescriptor kBtypeDescriptor = {audio::btype::kEngineId, "BTYPE", 0, int8_t(audio::btype::kVolume),
                                         uint8_t(audio::btype::kParamCount), kParams, kUi, kSections,
                                         uint8_t(sizeof(kSections) / sizeof(kSections[0])), 2, kExt, "B-Type", -1,
                                         initPatch};

}  // namespace mod
}  // namespace ot
