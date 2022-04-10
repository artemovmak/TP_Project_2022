#pragma once

#include <SFML/Graphics.hpp>
#include "../../Field/Hex.h"

class HexGraphics {
private:
  sf::CircleShape hex;
public:
  void ChangeColor(const Hex& tile);
  void SetDrawPosition(int i, int j);
  HexGraphics GetHexTexture();
  explicit HexGraphics(const Hex& tile);
};