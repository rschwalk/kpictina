import QtQuick
import QtQuick.Layouts
import QtQuick.Controls as Controls
import org.kde.kirigami as Kirigami
import ImageModel 1.0


GridView {
    id: grid
    anchors.fill: parent
    clip: true
    model: ImageModel {
        id: picModel
    }
    cellWidth: 124 + 10
    cellHeight: 124 + 10
    delegate: Component {
        Kirigami.Card {
            width: grid.cellWidth - 10
            height: grid.cellHeight - 10
            anchors.margins: 10
            Image {
                source: model.path
                anchors.fill: parent
                anchors.horizontalCenter: parent.horizontalCenter
                fillMode: Image.PreserveAspectFit
                sourceSize.width: 124
                sourceSize.height: 124
            }
        }
    }
}