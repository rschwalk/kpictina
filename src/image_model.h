//
// Created by rschwalk on 09.08.25.
//

#pragma once

#include <QAbstractListModel>

#include "image_library.h"

class ImageModel : public QAbstractListModel
{
public:
    enum Role
    {
        PathRole = Qt::UserRole,
    };

    int rowCount(const QModelIndex& parent) const override;
    QHash<int, QByteArray> roleNames() const override;
    QVariant data(const QModelIndex& index, int role) const override;

    ImageModel();

private:
    QStringList m_images;
    ImageLibrary m_imageLibrary;
};
