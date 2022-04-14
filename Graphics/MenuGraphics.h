#pragma once

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "../Vector/Vector.h"

#define UnitIconPosition 300, 900
#define BuildingIconPosition 500, 900

class MenuGraphics {
 public:
  bool is_unit_tapped;
  bool is_building_tapped;

  MenuGraphics();

  bool UnitIconContains(Vector<int>) const;
  bool BuildingIconContains(Vector<int>) const;
  sf::Sprite GetUnitIcon() const;
  sf::Sprite GetBuildingIcon() const;
  void Draw(sf::RenderWindow& window);
 private:
  sf::Sprite unit_icon_;
  sf::Texture unit_texture_;
  sf::Sprite building_icon_;
  sf::Texture building_texture_;
};