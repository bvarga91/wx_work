cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(wx_cmake_template_core LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# hack for buggy CMake's FindwxWidgets script
if (DEFINED ENV_WX_CONFIG)
    set (ENV{WX_CONFIG} ${ENV_WX_CONFIG})
endif()

set(wxWidgets_USE_STATIC 1)

find_package(wxWidgets REQUIRED)

set(SRCS main.cpp)

include(${wxWidgets_USE_FILE})

if (APPLE)
    # create bundle on apple compiles
    add_executable(wx_cmake_template_core MACOSX_BUNDLE ${SRCS} mainwindow.cpp login.cpp)
    target_include_directories(wx_cmake_template_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
    # Set a custom plist file for the app bundle - needed for Mac OS Retina display
    set_target_properties(wx_cmake_template_core PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
else()
    # the WIN32 is needed for Windows in order for it to look for WinMain
    # instead of the main function. This is ignored on other systems,
    # so it works on all platforms
    add_executable(wx_cmake_template_core WIN32 ${SRCS} mainwindow.cpp login.cpp)
    target_include_directories(wx_cmake_template_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
endif()

target_link_libraries(wx_cmake_template_core PRIVATE ${wxWidgets_LIBRARIES})