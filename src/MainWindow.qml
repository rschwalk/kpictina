// Includes relevant modules used by the QML
import QtQuick
import QtQuick.Layouts
import QtQuick.Controls as Controls
import org.kde.kirigami as Kirigami

// Provides basic features needed for all kirigami applications
Kirigami.ApplicationWindow {
    // Unique identifier to reference this object
    id: root

    width: 800
    height: 500

    // Window title
    title: "KPicTina"

    globalDrawer: Kirigami.GlobalDrawer {
        title: "Sidebar"
        titleIcon: "view-list-tree-symbolic"
        modal: false
        collapsible: true
        collapsed: true
    }

    ListModel {
        id: picModel
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/icon.png"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/icon.png"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/icon.png"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/icon.png"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"}
        ListElement { path: "file:/home/rschwalk/proj/kpictina/tmp/icon.png"}
    }

    // Set the first page that will be loaded when the app opens
    // This can also be set to an id of a Kirigami.Page
    pageStack.initialPage: Kirigami.ScrollablePage {
        GridView {
            id: grid
            anchors.fill: parent
            clip: true
            model: picModel
            cellWidth: 124 + 10
            cellHeight: 124 + 10
            delegate: Component {
                Kirigami.Card {
                    width: grid.cellWidth - 10
                    height: grid.cellHeight - 10
                    anchors.margins: 10
                    Image {
                        source: path
                        anchors.fill: parent
                        anchors.horizontalCenter: parent.horizontalCenter
                        fillMode: Image.PreserveAspectFit
                        sourceSize.width: 124
                        sourceSize.height: 124
                    }
                }
            }
        }
    }
}
