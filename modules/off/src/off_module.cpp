// Off module (OFF1): the Off engine (off.h) and its descriptor: a hidden
// Volume and no Edit Patch sections, so Edit Patch shows nothing to edit.
#include "off.h"
#include "modules/module.h"
#include "modules/synth_descriptor.h"

namespace ot {
namespace mod {

namespace {

// One parameter, Volume (the Init patch aims Macro 7 at it, as every engine's),
// not shown: no Edit Patch sections, nothing to edit.
const PatchParamRange kParams[1] = {{1, 0, 2}};
const synthui::ParamUi kUi[1] = {};

}  // namespace

extern const SynthDescriptor kOffDescriptor;
const SynthDescriptor kOffDescriptor = {audio::off::kEngineId, "OFF", 0, 0, 1, kParams, kUi, nullptr, 0, 0, nullptr,
                                        "Off"};

namespace {

const ModuleInfo kInfo = {"OFF1", kModuleApi, 100, "Off", kCapSynthEngine | kCapSynthDescriptor, 0, 0, 0, 200, 8};

class Module final : public IModule {
public:
    const ModuleInfo& info() const override { return kInfo; }
    bool attach(ModuleHost&) override { return true; }
    audio::ISynthEngine* synthEngine(int32_t engineId) override {
        return engineId == audio::off::kEngineId ? audio::off::engine() : nullptr;
    }
    const SynthDescriptor* synthDescriptor(int i) const override { return i == 0 ? &kOffDescriptor : nullptr; }
};

Module gModule;

}  // namespace

IModule& offModule() { return gModule; }

}  // namespace mod
}  // namespace ot
