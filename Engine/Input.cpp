#include "Engine.h"

void Engine::Input() {

  if (Keyboard::IsEscapePressed()) {
    game_window.Close();
  }
  if (farmer.GetGraphics().GetSprite().getGlobalBounds().contains
    (game_window.GetWindow().mapPixelToCoords(sf::Mouse::getPosition(game_window.GetWindow()))) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
    farmer.GetGraphics().Capture();
  } else {
    farmer.GetGraphics().Stop();
  }
}