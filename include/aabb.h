#include <glm/vec2.hpp>

#ifndef __AABB_H__
#define __AABB_H__

struct AABB {
  glm::vec2 min;
  glm::vec2 max;
};

#endif