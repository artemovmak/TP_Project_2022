#pragma once

#include "../Vectors/Vector2f.h"
#include "../../Field/Hex.h"
#include "../GameComponents/HexGraphics.h"
#include "../GameComponents/UnitGraphics.h"
#include <SFML/Graphics.hpp>

class Window {
private:
  Vector2f resolution;
  sf::RenderWindow window;
public:
  void Clear();
  bool IsOpen();
  void DrawHex(Hex& odj, int i, int j);
  void Draw(const sf::Sprite& odj);
  void DrawUnit(Hex& odj, int i, int j);
  void Display();
  void Close();
  Window();
  sf::RenderWindow& GetWindow();
};