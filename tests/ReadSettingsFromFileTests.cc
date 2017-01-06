#include "gtest/gtest.h"
#include "ReadSettingsFromFile.h"

TEST(ReadSettingsFromFile, ReadSettingsFromFile1) {

    read_settings_from_file::ReadSettingsFromFile loader("SettingsFile01.txt");

    ASSERT_STREQ("www.test.com.pl", loader.GetAsString(i_settings_loader::SETTING_TYPE_WEB_ADDRESS));
    ASSERT_STREQ("Room1", loader.GetAsString(i_settings_loader::SETTING_TYPE_HOST_NAME));
}

TEST(ReadSettingsFromFile, ReadSettingsFromFile2) {

    read_settings_from_file::ReadSettingsFromFile loader("SettingsFile02.txt");

    ASSERT_STREQ("test.com/add.php?value1", loader.GetAsString(i_settings_loader::SETTING_TYPE_WEB_ADDRESS));
}
