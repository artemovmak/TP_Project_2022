#include "Engine.h"

void Engine::Draw() {
  game_window.Clear();
  for (int i  = 0; i < FieldVertSize; i++) {
    for (int j = 0; j < FieldHorSize; j++) {
      game_window.DrawHex(field.GetHex(Vector2i(i, j)), i, j);
    }
  }
  for (int i  = 0; i < FieldVertSize; i++) {
    for (int j = 0; j < FieldHorSize; j++) {
      game_window.DrawUnit(field.GetHex(Vector2i(i, j)), i, j);
    }
  }
  game_window.Draw(farmer.GetGraphics().GetSprite());
  game_window.Display();
}