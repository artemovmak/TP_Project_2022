#include "UnitGraphics.h"

void UnitGraphics::SetPosition(float i, float  j) {
  unit_.setPosition(i, j);
}

sf::Sprite& UnitGraphics::GetSprite() {
  return unit_;
}

UnitGraphics::UnitGraphics(const Unit& unit) {
  if (unit.GetUnitType() == 0) {
    texture.loadFromFile("/home/makarart/CLionProjects/GAMEWITHOUTRULES/Texture/man0_low.png");
  }  //farmer
  if (unit.GetUnitType() == 1) {
    texture.loadFromFile("../Texture/man1_low.png");
  }  //spearman
  if (unit.GetUnitType() == 2) {
    texture.loadFromFile("../Texture/man2_low.png");
  }  //knight
  if (unit.GetUnitType() == 3) {
    texture.loadFromFile("../Texture/man3_low.png");
  }  //advanced knight
  unit_.setTexture(texture);
  unit_.setPosition(unit.GetPosition().GetX(), unit.GetPosition().GetY());
  is_captured_ = false;
}

void UnitGraphics::Capture() {
  is_captured_ = true;
}
void UnitGraphics::Stop() {
  is_captured_ = false;
}