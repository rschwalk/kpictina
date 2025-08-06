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

    // globalDrawer: Kirigami.GlobalDrawer {
    //     title: "Sidebar"
    //     titleIcon: "view-list-tree-symbolic"
    //     modal: false
    //     collapsible: true
    //     collapsed: true
    // }

    // Set the first page that will be loaded when the app opens
    // This can also be set to an id of a Kirigami.Page
    pageStack.initialPage: Kirigami.Page {
        Controls.Label {
            // Center label horizontally and vertically within parent object
            anchors.centerIn: parent
            text: "Hello World!"
        }
    }
}
