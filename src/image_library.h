//
// Created by rschwalk on 14.08.25.
//

#ifndef KPICTINA_PROJECT_IMAGELIBRARY_H
#define KPICTINA_PROJECT_IMAGELIBRARY_H
#include <string>
#include <vector>


class ImageLibrary
{
  std::vector<std::string> m_images;

public:
  ImageLibrary();

  [[nodiscard]] const std::vector<std::string>& images() const
  {
    return m_images;
  }
};


#endif //KPICTINA_PROJECT_IMAGELIBRARY_H
