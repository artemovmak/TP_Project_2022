#include "UnitGraphics.h"

void UnitGraphics::SetPosition(float i, float  j) {
  unit_.setPosition(i, j);
}

sf::Sprite UnitGraphics::GetSprite() {
  return unit_;
}

UnitGraphics::UnitGraphics(const Unit& unit) {
  sf::Texture texture;
  sf::Image image;
  if (unit.GetUnitType() == 0) {
    image.loadFromFile("../Texture/man0_low.png");
    texture.loadFromImage(image);
  }  //farmer
  if (unit.GetUnitType() == 1) {
    image.loadFromFile("../Texture/man1_low.png");
    texture.loadFromImage(image);
  }  //spearman
  if (unit.GetUnitType() == 2) {
    image.loadFromFile("../Texture/man2_low.png");
    texture.loadFromImage(image);
  }  //knight
  if (unit.GetUnitType() == 3) {
    image.loadFromFile("../Texture/man3_low.png");
    texture.loadFromImage(image);
  }  //advanced knight
  is_captured_ = false;
}

void UnitGraphics::Capture() {
  is_captured_ = true;
}
void UnitGraphics::Stop() {
  is_captured_ = false;
}