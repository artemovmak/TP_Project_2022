#include "HexGraphics.h"

HexGraphics::HexGraphics() {
  hex = sf::CircleShape(25, 6);
  hex.setOutlineColor(sf::Color::Black);
  hex.setOutlineThickness(5);
  hex.setOrigin(25, 25);
  hex.setFillColor(sf::Color(sf::Color::Blue));//(tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256));
}

HexGraphics::HexGraphics(const Hex& tile) {
  hex = sf::CircleShape(25, 6);
  hex.setOutlineColor(sf::Color::Black);
  hex.setOutlineThickness(5);
  hex.setOrigin(25, 25);
  hex.setPosition(static_cast<float>(tile.GetPosition().x), static_cast<float>(tile.GetPosition().y));
  hex.setFillColor(sf::Color(sf::Color::Blue));//(tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256, (tile.GetOwner() * 128) % 256));
}

void HexGraphics::SetColor(sf::Color color) {
  hex.setFillColor(color);
}

void HexGraphics::SetPosition(Vector<int> v) {
  hex.setPosition(static_cast<float>(v.x), static_cast<float>(v.y));
}

sf::CircleShape HexGraphics::GetHexTexture() {
  return hex;
}