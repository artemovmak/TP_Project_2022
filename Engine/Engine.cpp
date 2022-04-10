#include "Engine.h"
void Engine::Start() {
  while (game_window.IsOpen()) {
    Draw();
  }
}