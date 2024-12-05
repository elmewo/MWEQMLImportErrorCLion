set_source_files_properties(Singleton.qml
        PROPERTIES QT_QML_SINGLETON_TYPE TRUE)

qt_add_qml_module(module3
        STATIC
        URI module3
        QML_FILES
            Singleton.qml
        SOURCES
            property_type.cpp
            property_type.hpp
)

target_link_libraries(module3
        PUBLIC Qt6::Core Qt6::Quick
)
