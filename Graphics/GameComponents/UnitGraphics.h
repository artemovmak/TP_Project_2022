#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include "../../Units/UnitDirector.h"

class UnitGraphics {
 private:
  sf::Sprite unit_;
  sf::Texture texture;
  bool is_captured_ = 0;
 public:
  UnitGraphics() = default;
  explicit UnitGraphics(Unit& unit);

  void SetPosition(float i, float j);
  sf::Sprite& GetSprite();
  void ChangeSkin(Unit& unit);
  void SetFarmer(Unit& unit);
  void Capture();
  bool IsCapture();
  void Stop();

};