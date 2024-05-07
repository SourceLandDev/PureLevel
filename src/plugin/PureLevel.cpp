#include "plugin/PureLevel.h"

#include <memory>

#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/RegisterHelper.h"

namespace pure_level {

static std::unique_ptr<PureLevel> instance;

PureLevel& PureLevel::getInstance() { return *instance; }

bool PureLevel::load() {
    getSelf().getLogger().info("Loading...");
    // Code for loading the plugin goes here.
    return true;
}

bool PureLevel::enable() {
    getSelf().getLogger().info("Enabling...");
    // Code for enabling the plugin goes here.
    return true;
}

bool PureLevel::disable() {
    getSelf().getLogger().info("Disabling...");
    // Code for disabling the plugin goes here.
    return true;
}

} // namespace pure_level

LL_REGISTER_PLUGIN(pure_level::PureLevel, pure_level::instance);
