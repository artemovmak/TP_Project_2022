#include "HexGraphics.h"

HexGraphics::HexGraphics() {
  hex = sf::CircleShape(kCircleShapeRadius, 6);
  hex.setOutlineColor(sf::Color::Black);
  hex.setOutlineThickness(kHexOutlineThickness);
  hex.setFillColor(sf::Color(sf::Color::Blue));//(tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256));
}

HexGraphics::HexGraphics(const Hex& tile) {
  hex = sf::CircleShape(kCircleShapeRadius, 6);
  hex.setOutlineColor(sf::Color::Black);
  hex.setOutlineThickness(kHexOutlineThickness);
  hex.setPosition(static_cast<float>(tile.GetPosition().x), static_cast<float>(tile.GetPosition().y));
  hex.setFillColor(sf::Color(sf::Color::Blue));//(tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256));
}

void HexGraphics::SetColor(sf::Color color) {
  hex.setFillColor(color);
}

void HexGraphics::SetPosition(Coords<int> v) {
  hex.setPosition(static_cast<float>(v.x), static_cast<float>(v.y));
}

sf::CircleShape HexGraphics::GetHexTexture() {
  return hex;
}