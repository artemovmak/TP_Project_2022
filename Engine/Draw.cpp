#include "Engine.h"

void Engine::Draw() {
  game_window.Clear();

  for (int i  = 0; i < FieldVertSize; i++) {
    for (int j = 0; j < FieldHorSize; j++) {
      HexGraphics hex(field.GetHex(Vector2i(i, j)));
      hex.SetDrawPosition(i, j);
      game_window.Draw(hex.GetHexTexture());
    }
  }
  UnitGraphics u_graphics(*ptr);
  game_window.Draw(u_graphics.GetSprite());
  game_window.Display();
}