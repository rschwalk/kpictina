//
// Created by rschwalk on 08.08.25.
//
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QUrl>
#include <QQuickStyle>
#include <KLocalizedContext>
#include <KLocalizedString>
#include <KIconTheme>

#include "image_model.h"

int main(int argc, char *argv[])
{
    KIconTheme::initTheme();
    QApplication app(argc, argv);
    KLocalizedString::setApplicationDomain("pictina");
    QApplication::setOrganizationName(QStringLiteral("rschwalk"));
    QApplication::setOrganizationDomain(QStringLiteral("rschwalk.eu"));
    QApplication::setApplicationName(QStringLiteral("PicTina"));
    QApplication::setDesktopFileName(QStringLiteral("eu.rschwalk.kpictina"));

    QApplication::setStyle(QStringLiteral("breeze"));
    if (qEnvironmentVariableIsEmpty("QT_QUICK_CONTROLS_STYLE")) {
        QQuickStyle::setStyle(QStringLiteral("org.kde.desktop"));
    }

    qmlRegisterType<ImageModel>("ImageModel", 1, 0, "ImageModel");

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextObject(new KLocalizedContext(&engine));
    engine.loadFromModule("eu.rschwalk.pictina", "MainWindow");

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
