#pragma once
#include <SFML/Graphics.hpp>
class Vector2i {
private:
  sf::Vector2i vector;
public:
  Vector2i();
  Vector2i(int, int);

  void SetVector2i(int, int);
  void SetVector2i(Vector2i);
  Vector2i GetVector2i();
  int GetX();
  int GetY();

};
