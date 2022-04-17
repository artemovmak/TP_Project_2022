#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include "HexGraphics.h"
#include "../Field/Field.h"

class FieldGraphics {
 public:
  FieldGraphics();

  HexGraphics& GetHexGraphics(Vector<int>);
  void SetColor(sf::Color);
  void Draw(sf::RenderWindow& window);
 private:
  HexGraphics field_graphics[FieldVertSize][FieldHorSize];
};