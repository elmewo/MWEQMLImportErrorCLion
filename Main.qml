import QtQuick
import module1

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Type1 {
        anchors.fill: parent
    }
}
