#pragma once

#include "SettingsLoader.h"
#include <string>

namespace read_settings_from_file {

class ReadSettingsFromFile : public settings_loader::SettingsLoader {

public:

    ReadSettingsFromFile(const std::string path_to_file);

    virtual const char *GetAsString(const i_settings_loader::SETTING_TYPE type);

private:
    std::string settings[i_settings_loader::SETTING_TYPE_LAST];

    void AddSetting(std::string setting_name, std::string setting_value);

};

} /* namespace read_settings_from_file */
