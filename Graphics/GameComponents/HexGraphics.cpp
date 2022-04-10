#include "HexGraphics.h"

HexGraphics::HexGraphics(const Hex& tile) {
  hex = sf::CircleShape(25, 6);
  hex.setOutlineColor(sf::Color::Black);
  hex.setOutlineThickness(5);
  hex.setOrigin(25, 25);
  hex. setPosition(0,0);
  hex.setFillColor(sf::Color((tile.owner * 128) % 256, (tile.owner * 128) % 256, (tile.owner * 128) % 256));
}

void HexGraphics::ChangeColor(const Hex& tile) {
  hex.setFillColor(sf::Color((tile.owner * 128) % 256, (tile.owner * 128) % 256, (tile.owner * 128) % 256));
}

void HexGraphics::SetDrawPosition(int i, int j) {
  hex.setPosition(static_cast<float>(j % 2 == 1 ? 75 : 50) + static_cast<float>(i)  * 50.f, 50 + static_cast<float>(j) * 40.f);
}

HexGraphics HexGraphics::GetHexTexture() {
  return *this;
}