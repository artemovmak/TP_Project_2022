#include "Keyboard.h"

bool Keyboard::IsEscapePressed() {
  return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
}