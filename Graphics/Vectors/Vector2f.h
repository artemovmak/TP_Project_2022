#pragma once
#include <SFML/Graphics.hpp>

class Vector2f {
private:
  sf::Vector2f vector;
public:
  Vector2f();
  Vector2f(float, float);
  Vector2f(int, int);

  void SetVector2f(float, float);
  Vector2f GetVector2f();
  float GetX();
  float GetY();

};