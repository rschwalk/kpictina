//
// Created by rschwalk on 14.08.25.
//

#include "image_library.h"

#include <filesystem>

ImageLibrary::ImageLibrary()
    : m_images{}
{
    namespace fs = std::filesystem;
    const fs::path default_path{"/home/rschwalk/Pictures"};
    try
    {
        for (const auto& dir_entry : fs::directory_iterator(default_path))
        {
            if (fs::is_regular_file(dir_entry.path()))
            {
                m_images.push_back(dir_entry.path().string());
            }
        }
    }
    catch (
        [[maybe_unused]]
        fs::filesystem_error const& err
    )
    {
    }
}
