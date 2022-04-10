#include "Engine.h"

void Engine::Draw() {
  game_window.Clear();
  for (int i  = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      HexGraphics hex(field.GetHex(Vector2i(i, j)));
      hex.SetDrawPosition(i, j);
      game_window.Draw(hex.GetHexTexture());
    }
  }
  game_window.Display();
}