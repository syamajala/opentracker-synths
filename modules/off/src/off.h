// Off: a synth engine with no sound and no settings ([I] OpenTracker fork,
// engine 0xF1 in the fork's range, model/synth_patch.h kSynthEngineOff). A
// synth slot on it is unused: nothing loads from the card for it, and its
// notes end in their first block.
#pragma once

#include "audio/synth_engine.h"

namespace ot {
namespace audio {
namespace off {

constexpr int32_t kEngineId = kSynthEngineOff;   // 0xF1

ISynthEngine* engine();

}  // namespace off
}  // namespace audio
}  // namespace ot
