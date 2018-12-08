#include <iostream>
#include <cstdlib>
#include <cmath>

#include <glm/vec2.hpp>

#include "../include/aabb.h"
#include "../include/circle.h"

float Distance2D(glm::vec2 a, glm::vec2 b) {
  return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

bool CircleIntersect(Circle a, Circle b) {
  float r = a.radius + b.radius;
  return r < Distance2D(a.position, b.position);
}

bool AABBIntersect(AABB a, AABB b) {
  if (a.max.x < b.min.x || a.min.x > b.max.x) {
    return false;
  }
  if (a.max.y < b.min.y || a.min.y > b.max.y) {
    return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  return 0;
}