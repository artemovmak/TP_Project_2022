#pragma once

#include <SFML/System/Vector2.hpp>

template <class T>
class Vector {
 public:
  T x;
  T y;
  Vector();
  Vector(T, T);
  explicit Vector(sf::Vector2<T>);

  void SetVector(T, T);
  void SetVector(Vector<T>);
};

template <class T>
Vector<T>::Vector() : x(0), y(0) {}

template <class T>
Vector<T>::Vector(T coord1, T coord2) : x(coord1), y(coord2) {}

template <class T>
Vector<T>::Vector(sf::Vector2<T> v) : x(v.x), y(v.y) {}

template <class T>
void Vector<T>::SetVector(T coord1, T coord2) {
  x = coord1;
  y = coord2;
}

template <class T>
void Vector<T>::SetVector(Vector<T> v) {
  x = v.x;
  y = v.y;
}