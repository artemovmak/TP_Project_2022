#pragma once

#include <SFML/Graphics/CircleShape.hpp>

#include "../Field/Field.h"

class HexGraphics {
private:
  sf::CircleShape hex;
public:
  HexGraphics();
  explicit HexGraphics(const Hex& tile);

  void SetColor(sf::Color);
  void SetPosition(Coords<int>);
  sf::CircleShape GetHexTexture();
};