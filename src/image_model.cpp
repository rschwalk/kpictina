//
// Created by rschwalk on 09.08.25.
//

#include "image_model.h"

int ImageModel::rowCount(const QModelIndex& parent) const
{
    return m_images.count();
}

QHash<int, QByteArray> ImageModel::roleNames() const
{
    return {
        {PathRole, "path"},
    };
}

QVariant ImageModel::data(const QModelIndex& index, int role) const
{
    const auto it = m_images.begin() + index.row();
    switch (role)
    {
    case PathRole:
        return *it;
    default:
        return {};
    }
}

ImageModel::ImageModel() :
    m_images{},
    m_imageLibrary{}
{
    for (auto img : m_imageLibrary.images())
    {
        m_images.push_back(QString::fromStdString("file:" + img));
    }

    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/icon.png"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/icon.png"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/icon.png"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/icon.png"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/img2.jpg"));
    // m_images.push_back(QString::fromStdString("file:/home/rschwalk/proj/kpictina/tmp/icon.png"));
}
