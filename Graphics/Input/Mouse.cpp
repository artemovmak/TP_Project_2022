#include "Mouse.h"

Vector2i Mouse::GetCoords(Window game_window) {
  sf::Vector2i v = sf::Mouse::getPosition(game_window.GetWindow());
  return {v.x, v.y};
}

bool Mouse::IsLeftButtonPressed() {
  return sf::Mouse::isButtonPressed(sf::Mouse::Left);
}