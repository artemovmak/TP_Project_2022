#include "Background.h"

Background::Background(Window window) {
  game_background_texture.loadFromFile("../Background.jpg");
  game_background_sprite.setTexture(game_background_texture);
}
