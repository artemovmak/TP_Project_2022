#include "Engine.h"

Engine::Engine() = default;

void Engine::Start() {
  while (game_window.IsOpen()) {
    StartingPosition();
    Input();
    Update();
    Draw();
  }
}