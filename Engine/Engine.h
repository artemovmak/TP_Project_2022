#pragma once
#include "../Units/Unit.h"
#include "../Towers/Building.h"
#include "../Field/Field.h"
#include "../Graphics/Background/Background.h"
#include "../Graphics/EngineComponents/Window.h"
#include "../Graphics/GameComponents/HexGraphics.h"

class Engine {
private:
  Window game_window;
  Background background;
  void Draw();
  Field field;
public:
  Engine() = default;
  void Start();
};