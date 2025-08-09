add_library(kpictina-components)

ecm_add_qml_module(kpictina-components
        URI "eu.rschwalk.kpictina.components"
        GENERATE_PLUGIN_SOURCE
)

ecm_target_qml_sources(kpictina-components
        SOURCES
        ImageGrid.qml
)

ecm_finalize_qml_module(kpictina-components)

install(TARGETS kpictina-components ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})
