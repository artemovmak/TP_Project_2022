#pragma once

#include "../Vectors/Vector2f.h"
#include <SFML/Graphics.hpp>

class Window {
private:
  Vector2f resolution;
  sf::RenderWindow window;
public:
  Window();
  sf::RenderWindow& GetWindow();
};