#pragma once

#include <SFML/System/Vector2.hpp>

template <class T>
class Coords {
 public:
  T x;
  T y;
  Coords();
  Coords(T, T);
  explicit Coords(sf::Vector2<T>);

  void SetVector(T, T);
  void SetVector(Coords<T>);
};

template <class T>
Coords<T>::Coords() : x(0), y(0) {}

template <class T>
Coords<T>::Coords(T coord1, T coord2) : x(coord1), y(coord2) {}

template <class T>
Coords<T>::Coords(sf::Vector2<T> v) : x(v.x), y(v.y) {}

template <class T>
void Coords<T>::SetVector(T coord1, T coord2) {
  x = coord1;
  y = coord2;
}

template <class T>
void Coords<T>::SetVector(Coords<T> v) {
  x = v.x;
  y = v.y;
}