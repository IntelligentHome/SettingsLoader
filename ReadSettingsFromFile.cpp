#include "ReadSettingsFromFile.h"
#include <fstream>
#include <iostream>
#include <regex>

namespace read_settings_from_file {

ReadSettingsFromFile::ReadSettingsFromFile(const std::string path_to_file) {

    std::ifstream file(path_to_file);
    std::string line;

    std::regex pattern("\"(.+)\":\"(.+)\"");
    std::smatch match;

    while (std::getline(file, line)) {

        if (std::regex_match(line, match, pattern)) {
            std::ssub_match type = match[1];
            std::ssub_match value = match[2];

            this->AddSetting(type, value);
        }
    }
}

const char *ReadSettingsFromFile::GetAsString(const i_settings_loader::SETTING_TYPE type) {

    return this->settings[type].c_str();
}

void ReadSettingsFromFile::AddSetting(std::string setting_name, std::string setting_value) {

    if (setting_name == "WebAddress") {
        this->settings[i_settings_loader::SETTING_TYPE_WEB_ADDRESS] = setting_value;
    } else if (setting_name == "HostName") {
        this->settings[i_settings_loader::SETTING_TYPE_HOST_NAME] = setting_value;
    }
}

} /* namespace read_settings_from_file */
