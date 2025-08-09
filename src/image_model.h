//
// Created by rschwalk on 09.08.25.
//

#pragma once

#include <QAbstractListModel>

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
    QStringList m_images = {
    };
};