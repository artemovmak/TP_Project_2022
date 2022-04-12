#include "Engine.h"

void Engine::Input() {

  if (Keyboard::IsEscapePressed()) {
    game_window.Close();
  }
  if (farmer.GetGraphics().GetSprite().getGlobalBounds().contains
    (game_window.GetWindow().mapPixelToCoords(sf::Mouse::getPosition(game_window.GetWindow())))) {
    farmer.GetGraphics().Capture();
  } else {
    //farmer.Stop();
  }
}