#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqmlextensionplugin.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Q_IMPORT_QML_PLUGIN(ModulePlugin)

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("MWEQmlImports", "Main");

    return app.exec();
}
