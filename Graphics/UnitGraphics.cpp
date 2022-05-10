#include "UnitGraphics.h"

UnitGraphics::UnitGraphics(const Unit& unit) {
  SetPosition(unit.GetPosition());
  switch(unit.GetUnitType()) {
    case 0: {
      texture_.loadFromFile("../Texture/man0_low.png");
      SetTexture(texture_);
      break;
    }
    case 1: {
      texture_.loadFromFile("../Texture/man1_low.png");
      SetTexture(texture_);
      break;
    }
    case 2: {
      texture_.loadFromFile("../Texture/man2_low.png");
      SetTexture(texture_);
      break;
    }
    case 3: {
      texture_.loadFromFile("../Texture/man3_low.png");
      SetTexture(texture_);
      break;
    }
  }
}

void UnitGraphics::SetPosition(Coords<int> v) {
  unit_sprite_.setPosition(static_cast<float>(v.x), static_cast<float>(v.y));
}

sf::Sprite& UnitGraphics::GetSprite() {
  return unit_sprite_;
}

void UnitGraphics::SetTexture(const sf::Texture& texture) {
  unit_sprite_.setTexture(texture);
}