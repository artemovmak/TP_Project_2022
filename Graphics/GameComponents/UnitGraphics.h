#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include "../../Units/UnitDirector.h"

class UnitGraphics {
 private:
  sf::Sprite unit_;
  sf::Texture texture;
  bool is_captured_;
 public:
  explicit UnitGraphics(const Unit& unit);

  void SetPosition(float i, float j);
  sf::Sprite& GetSprite();

  void Capture();
  void Stop();

};