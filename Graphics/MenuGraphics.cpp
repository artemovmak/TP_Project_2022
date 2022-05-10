#include "MenuGraphics.h"

MenuGraphics::MenuGraphics() : is_unit_tapped(false),
                               is_building_tapped(false) {
  unit_icon_.setPosition(kUnitIconX, kUnitIconY);
  building_icon_.setPosition(kBuildingIconX, kBuildingIconY);
  unit_texture_.loadFromFile("../Texture/man0.png");
  building_texture_.loadFromFile("../Texture/farm1.png");
  unit_icon_.setTexture(unit_texture_);
  building_icon_.setTexture(building_texture_);
}

bool MenuGraphics::UnitIconContains(Coords<int> v) const {
  return GetUnitIcon().getGlobalBounds().contains(static_cast<float>(v.x),
                                                  static_cast<float>(v.y));
}

bool MenuGraphics::BuildingIconContains(Coords<int> v) const {
  return GetBuildingIcon().getGlobalBounds().contains(static_cast<float>(v.x),
                                                     static_cast<float>(v.y));
}

sf::Sprite MenuGraphics::GetUnitIcon() const {
  return unit_icon_;
}

sf::Sprite MenuGraphics::GetBuildingIcon() const {
  return building_icon_;
}

void MenuGraphics::Draw(sf::RenderWindow& window) {
  window.draw(GetUnitIcon());
  window.draw(GetBuildingIcon());
}