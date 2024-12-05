qt_add_qml_module(module1
        STATIC
        URI module1
        QML_FILES
            Type1.qml
)

target_link_libraries(module1
        PUBLIC
            module2plugin
            module3plugin
)
