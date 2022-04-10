#pragma once
#include "../Units/Unit.h"
#include "../Towers/Building.h"
#include "../Field/Field.h"
#include "../Graphics/Background/Background.h"
#include "../Graphics/EngineComponents/Window.h"
#include "../Graphics/GameComponents/HexGraphics.h"
#include "../Graphics/Input/Mouse.h"
#include "../Graphics/Input/Keyboard.h"
class Engine {
private:
  Window game_window;
  Background background;
  void Draw();
  void Input();
  Field field;
public:
  Engine() = default;
  void Start();
};