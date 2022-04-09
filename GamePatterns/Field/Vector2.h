#pragma once

template <class T>
class Vector2 {
 public:
  T x;
  T y;

  Vector2(T coord1, T coord2) : x(coord1), y(coord2) {}
};