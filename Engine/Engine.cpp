#include "Engine.h"

void Engine::Start() {
  while (graphics.Input(field)) {
    Update();
    graphics.Draw(field);
  }
}