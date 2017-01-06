set(CMAKE_SYSTEM_NAME Generic)
cmake_minimum_required(VERSION 2.8)

project(SettingsLoader)

include (../External/PlatformDependency.cmake)

include_directories(
    ../External/include/
    )

if (${_TARGET_PLATFORM} STREQUAL "RASPBERRYPI")

    set (SOURCES
        SettingsLoader.cpp
        ReadSettingsFromFile.cpp
        )

    add_library (${PROJECT_NAME} STATIC ${SOURCES})
endif()
