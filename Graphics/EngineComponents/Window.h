#pragma once

#include "../Vectors/Vector2f.h"
#include <SFML/Graphics.hpp>

class Window {
private:
  Vector2f resolution;
  sf::RenderWindow window;
public:
  void Clear();
  bool IsOpen();
  void Draw(const sf::CircleShape& odj);
  void Display();
  Window();
  sf::RenderWindow& GetWindow();
};