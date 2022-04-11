#include "Engine.h"

void Engine::Draw() {
  game_window.Clear();

  for (int i  = 0; i < FieldVertSize; i++) {
    for (int j = 0; j < FieldHorSize; j++) {
      game_window.DrawUnit(field.GetHex(Vector2i(i, j)), i, j);
    }
  }
  for (int i  = 0; i < FieldVertSize; i++) {
    for (int j = 0; j < FieldHorSize; j++) {
      game_window.DrawHex(field.GetHex(Vector2i(i, j)), i, j);
    }
  }
  UnitGraphics u_graphics(*ptr);
  //game_window.Draw(u_graphics.GetSprite());
  game_window.Display();
}