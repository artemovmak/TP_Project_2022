#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "../Vector/Vector.h"
#include "../Units/Unit.h"

class UnitGraphics {
 private:
  sf::Sprite unit_sprite_;
  sf::Texture texture_;
 public:
  explicit UnitGraphics(const Unit&);

  void SetPosition(Vector<int>);
  sf::Sprite& GetSprite();
  void SetTexture(const sf::Texture& texture);
};