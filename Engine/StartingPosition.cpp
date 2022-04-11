#include "Engine.h"

void Engine::StartingPosition() {
  sf::Texture unit_start_t;
  sf::Sprite unit_start_s;
  unit_start_t.loadFromFile("../Texture/man0_low.png");
  unit_start_s.setTexture(unit_start_t);
  unit_start_s.setPosition(100, 100);
  //game_window.Draw(unit_start_s);
}

