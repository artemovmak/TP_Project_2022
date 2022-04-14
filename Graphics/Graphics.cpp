#include "Graphics.h"

Graphics::Graphics() {
  resolution_ = Vector<float>(static_cast<float>(sf::VideoMode::getDesktopMode().width),
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
  Vector<int> v(sf::Mouse::getPosition(window_));
  for (int i = 0; i < FieldVertSize; ++i) {
    for (int j = 0; j < FieldHorSize; ++j) {
      if (field_graphics_.GetHexGraphics({i, j}).GetHexTexture().getGlobalBounds().contains(v.x, v.y)) {
        field_graphics_.GetHexGraphics({i, j}).SetColor(sf::Color::Green);
      }
    }
  }
  v = Vector<int>(sf::Mouse::getPosition(window_));
  if (menu_graphics_.UnitIconContains(v) &&
      sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    menu_graphics_.is_unit_tapped = true;
  }
  if (menu_graphics_.is_unit_tapped) {
    for (int i = 0; i < FieldVertSize; ++i) {
      for (int j = 0; j < FieldHorSize; ++j) {
        if (field.GetHex({i, j}).GetHexInterior() == Nothing) {
          field_graphics_.GetHexGraphics({i, j}).SetColor(sf::Color::Magenta);
        }
      }
    }
    menu_graphics_.is_unit_tapped = false;
  }
  return true;
}

void Graphics::Draw(Field field) {
  window_.clear(sf::Color::White);
  field_graphics_.Draw(window_);
  for (int i = 0; i < FieldVertSize; ++i) {
    for (int j = 0; j < FieldHorSize; ++j) {
      if (field.GetHex({i, j}).GetHexInterior() == Units) {
        UnitGraphics unit_graphics = UnitGraphics(field.GetHex({i, j}).GetUnit());
        window_.draw(unit_graphics.GetSprite());
      }
    }
  }
  menu_graphics_.Draw(window_);
  window_.display();
}