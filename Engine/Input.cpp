#include "Engine.h"

void Engine::Input() {

  if (Keyboard::IsEscapePressed()) {
    game_window.Close();
  }
}