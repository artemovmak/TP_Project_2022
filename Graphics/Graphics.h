#pragma once

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>

#include "../Field/Field.h"
#include "FieldGraphics.h"
#include "UnitGraphics.h"
#include "MenuGraphics.h"

class Graphics {
 public:
  Graphics();
  bool Input(Field);
  void Draw(Field);
 private:
  Vector<float> resolution_;
  MenuGraphics menu_graphics_;
  sf::RenderWindow window_;
  FieldGraphics field_graphics_;
};