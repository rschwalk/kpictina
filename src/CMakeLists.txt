#set(QT_QML_GENERATE_QMLLS_INI ON)

add_executable(kpictina)

ecm_add_qml_module(kpictina
        URI
        eu.rschwalk.pictina
)

target_sources(kpictina
        PRIVATE
        main.cpp
        image_model.cpp
        kpictina.qrc
)

ecm_target_qml_sources(kpictina
        SOURCES
        MainWindow.qml
#        kpictina.qrc
)

target_link_libraries(kpictina
        PRIVATE
        Qt6::Quick
        Qt6::Qml
        Qt6::Gui
        Qt6::QuickControls2
        Qt6::Widgets
        KF6::I18n
        KF6::CoreAddons
        KF6::IconThemes
)

install(TARGETS kpictina ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})
