#include "FieldGraphics.h"

FieldGraphics::FieldGraphics() {
  SetColor(sf::Color::Blue);
  for (int i = 0; i < FieldVertSize; ++i) {
    for (int j = 0; j < FieldHorSize; ++j) {
      GetHexGraphics({i, j}).SetPosition({(j % 2 == 1 ? 75 : 50) + i  * 50, 50 + j * 40});
    }
  }
}

HexGraphics& FieldGraphics::GetHexGraphics(Vector<int> v) {
  return field_graphics[v.x][v.y];
}

void FieldGraphics::SetColor(sf::Color color) {
  for (int i = 0; i < FieldVertSize; ++i) {
    for (int j = 0; j < FieldHorSize; ++j) {
      GetHexGraphics({i, j}).SetColor(color);
    }
  }
}

void FieldGraphics::Draw(sf::RenderWindow& window) {
  for (int i = 0; i < FieldVertSize; ++i) {
    for (int j = 0; j < FieldHorSize; ++j) {
      window.draw(field_graphics[i][j].GetHexTexture());
    }
  }
}