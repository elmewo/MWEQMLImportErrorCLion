qt_add_qml_module(module2
        STATIC
        URI module2
        QML_FILES
            Type2.qml
)

target_link_libraries(module2
        PUBLIC
            module3plugin
)
