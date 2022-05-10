#include "Graphics.h"
#include <iostream>

Graphics::Graphics() {
  resolution_ = Coords<float>(static_cast<float>(sf::VideoMode::getDesktopMode().width),
                              static_cast<float>(sf::VideoMode::getDesktopMode().height));
  window_.create(sf::VideoMode(static_cast<int>(resolution_.x),
                                     static_cast<int>(resolution_.y)),
                                    "Super Mega Game",
                                    sf::Style::Fullscreen);
  window_.setVerticalSyncEnabled(true);
  window_.setKeyRepeatEnabled(false);
}

bool Graphics::Input(Field field) {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
    return false;
  }
  field_graphics_.SetColor(sf::Color::Blue);
  Coords<int> v(sf::Mouse::getPosition(window_));
  for (int i = 0; i < kFieldHeight; ++i) {
    for (int j = 0; j < kFieldWidth; ++j) {
      if (field_graphics_.GetHexGraphics({i, j}).GetHexTexture().getGlobalBounds().contains(v.x, v.y)) {
        if (menu_graphics_.is_unit_tapped) {
          field_graphics_.GetHexGraphics({i, j}).SetColor(sf::Color::Green);
          if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            Unit unit;
            unit.SetUnitType(0);
            field.GetHex({i, j}).SetHexInterior(Units);
            field.GetHex({i, j}).SetUnit(unit);
            menu_graphics_.is_unit_tapped = false;
          }
        }
      }
    }
  }
  v = Coords<int>(sf::Mouse::getPosition(window_));
  if (menu_graphics_.UnitIconContains(v) &&
      sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    menu_graphics_.is_unit_tapped = true;
  }
  if (menu_graphics_.is_unit_tapped) {
    for (int i = 0; i < kFieldHeight; ++i) {
      for (int j = 0; j < kFieldWidth; ++j) {
        if (field.GetHex({i, j}).GetHexInterior() == Nothing) {
          //field_graphics_.GetHexGraphics({i, j}).SetColor(sf::Color::Magenta);
        }
      }
    }
  }
  return true;
}

void Graphics::Draw(Field field) {
  window_.clear(sf::Color::White);
  field_graphics_.Draw(window_);
  units_graphics.clear();
  for (int i = 0; i < kFieldHeight; ++i) {
    for (int j = 0; j < kFieldWidth; ++j) {
      if (field.GetHex({i, j}).GetHexInterior() == Units) {
        std::cout << i << ' ' << j << std::endl;
        units_graphics.emplace_back(field.GetHex({i, j}).GetUnit());
      }
    }
  }
  for (auto & unit_graphics : units_graphics) {
    window_.draw(unit_graphics.GetSprite());
  }
  menu_graphics_.Draw(window_);
  window_.display();
}