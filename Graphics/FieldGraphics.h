#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include "HexGraphics.h"
#include "../Field/Field.h"

class FieldGraphics {
 public:
  FieldGraphics();

  HexGraphics& GetHexGraphics(Coords<int>);
  void SetColor(sf::Color);
  void Draw(sf::RenderWindow& window);
 private:
  HexGraphics field_graphics[kFieldHeight][kFieldWidth];
};