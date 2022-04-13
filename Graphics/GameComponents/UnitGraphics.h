#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include "../../Units/UnitDirector.h"

class UnitGraphics {
 private:
  sf::Sprite unit_;
  sf::Texture texture;
  bool is_captured_ = false;
  bool is_tapped_ = false;
 public:
  UnitGraphics() = default;
  explicit UnitGraphics(Unit& unit);

  void SetPosition(float i, float j);
  sf::Sprite& GetSprite();
  void ChangeSkin(Unit& unit);
  void SetTexture(const sf::Texture& texture);
  void Capture();
  bool IsCapture();
  void Stop();

};