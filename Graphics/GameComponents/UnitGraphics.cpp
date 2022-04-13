#include "UnitGraphics.h"

void UnitGraphics::SetPosition(float i, float  j) {
  unit_.setPosition(i, j);
}

sf::Sprite& UnitGraphics::GetSprite() {
  return unit_;
}

bool UnitGraphics::IsCapture() {
  return is_captured_;
}
UnitGraphics::UnitGraphics(Unit& unit) {
  unit_.setPosition(unit.GetPosition().GetX(), unit.GetPosition().GetY());
  is_captured_ = false;
  is_captured_ = false;
}

void UnitGraphics::Capture() {
  is_captured_ = true;
}
void UnitGraphics::Stop() {
  is_captured_ = false;
}

void UnitGraphics::SetTexture(const sf::Texture& texture) {
  unit_.setTexture(texture);
}

void UnitGraphics::ChangeSkin(Unit &unit) {
  texture.loadFromFile("../Texture/man1_low.png");
  unit_.setTexture(texture);
}