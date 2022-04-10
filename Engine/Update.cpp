#include "Engine.h"

void Engine::Update() {
  /*if (unit_graphics.is_captured_) {
    unit_graphics.SetPosition(v.GetX(), v.GetY());
    ptr->SetPosition({int(v.GetX()), int(v.GetY())});
  }
  if ((unit_graphics.GetSprite().getGlobalBounds().contains
    (game_window.GetWindow().mapPixelToCoords(sf::Mouse::getPosition(game_window.GetWindow()))))
      && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    unit_graphics.Capture();
  } else {
    unit_graphics.Stop();
  }*/
  ptr->SetPosition({30, 30});
}