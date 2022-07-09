import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.2
import Custom.CustomText 1.0

Window {
    id: firstForm

    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button {
        anchors.centerIn: parent
        text: "Нажми меня"
        onClicked: {
            secondForm.open()
        }
    }

    CustomText {
        id: customText
    }

    Popup {
        id: secondForm

        width: parent.width
        height: parent.height

        Button {
            anchors.centerIn: parent
            text: "Нажми меня ещё раз"
            onClicked: {
                customText.writeToFile()
                Qt.quit()
            }
        }
    }
}
