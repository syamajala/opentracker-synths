// Off engine (off.h): no parameters, no sound.
#include "off.h"

namespace ot {
namespace audio {
namespace off {

namespace {

class Engine final : public ISynthEngine {
public:
    int32_t id() const override { return kEngineId; }
    const char* name() const override { return "OFF"; }
    void noteOn(SynthVoice& v, const SynthParams&, const SynthNote&) override { v.level = 0.0f; }
    void noteOff(SynthVoice&, const SynthParams&) override {}
    // Adds nothing; false: the voice is finished, the framework frees it.
    bool render(SynthVoice& v, const SynthParams&, float, float, float*, float*) override {
        v.level = 0.0f;
        return false;
    }
};

Engine gEngine;

}  // namespace

ISynthEngine* engine() { return &gEngine; }

}  // namespace off
}  // namespace audio
}  // namespace ot
