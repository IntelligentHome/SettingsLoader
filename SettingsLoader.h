#pragma once

#include "ISettingsLoader.h"

namespace settings_loader {

class SettingsLoader : public i_settings_loader::ISettingsLoader {

public:

    virtual const char *GetAsString(const i_settings_loader::SETTING_TYPE type) = 0;
};

} /* namespace settings_loader */
