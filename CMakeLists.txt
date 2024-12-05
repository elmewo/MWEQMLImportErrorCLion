cmake_minimum_required(VERSION 3.16)

project(MWEQmlImports VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick Core)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appMWEQmlImports
    main.cpp
)

add_subdirectory(imports)

qt_add_qml_module(appMWEQmlImports
    URI MWEQmlImports
    VERSION 1.0
    QML_FILES
        Main.qml
)

target_link_libraries(appMWEQmlImports
        PUBLIC
            module1plugin
            module2plugin
        PRIVATE Qt6::Quick
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appMWEQmlImports PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appMWEQmlImports
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)


include(GNUInstallDirs)
install(TARGETS appMWEQmlImports
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
