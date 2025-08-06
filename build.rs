use cxx_qt_build::{CxxQtBuilder, QmlModule};

fn main() {
    CxxQtBuilder::new()
        .qml_module(QmlModule {
            uri: "eu.rschwalk.kpictina",
            qml_files: &["src/qml/Main_window.qml"],
            rust_files: &["src/main.rs"],
            ..Default::default()
        })
        .build();
}
