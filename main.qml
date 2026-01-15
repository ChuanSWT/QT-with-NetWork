import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import App 1.0
Window {
    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("NetWorkFetcher")
    Backend{
        id:backend
    }

    Column{
        anchors.fill: parent
        spacing:0
        Rectangle {
            height: root.height-typer.height-send_button.height
            width: root.width
            border.color: "#cccccc"
            color: "white"
            ScrollView {
                anchors.fill: parent
                clip: true
                TextEdit {
                    id: displayer
                    anchors.fill: parent
                    anchors.margins: 8
                    wrapMode: TextEdit.NoWrap
                    font.pixelSize: 14
                    color: "#333"

                    text: backend.data.join("\n")   // ⭐自动更新
                    readOnly: true
                }

            }
        }

        TextEdit{
            id:typer
            height:128
            width:root.width
            wrapMode: TextEdit.Wrap
        }
        Button{
            id:send_button
            height:64
            width:root.width
            onClicked: {
                backend.send(typer.text)
                typer.text=""
            }
        }
    }
}
