#pragma once

#include "../EngineComponents/Window.h"

class Background {
private:
  sf::Sprite game_background_sprite;
  sf::Texture game_background_texture;
public:
  Background() = default;
  explicit Background(Window);
};