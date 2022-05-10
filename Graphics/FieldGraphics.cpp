#include "FieldGraphics.h"

FieldGraphics::FieldGraphics() {
  SetColor(sf::Color::Blue);
  for (int i = 0; i < kFieldHeight; ++i) {
    for (int j = 0; j < kFieldWidth; ++j) {
      Coords<int> coords = {kIndent + (j % 2)
                            * static_cast<int>((kCircleShapeRadius + kHexOutlineThickness) * 0.87)
                            + i * static_cast<int>(1.7 * (kCircleShapeRadius + kHexOutlineThickness)),
                            kIndent + j *
                            static_cast<int>((kCircleShapeRadius) * 1.7)};
      GetHexGraphics({i, j}).SetPosition(coords);
    }
  }
}

HexGraphics& FieldGraphics::GetHexGraphics(Coords<int> v) {
  return field_graphics[v.x][v.y];
}

void FieldGraphics::SetColor(sf::Color color) {
  for (int i = 0; i < kFieldHeight; ++i) {
    for (int j = 0; j < kFieldWidth; ++j) {
      GetHexGraphics({i, j}).SetColor(color);
    }
  }
}

void FieldGraphics::Draw(sf::RenderWindow& window) {
  for (int i = 0; i < kFieldHeight; ++i) {
    for (int j = 0; j < kFieldWidth; ++j) {
      window.draw(field_graphics[i][j].GetHexTexture());
    }
  }
}