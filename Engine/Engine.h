#pragma once
#include "../UnitsImplement/Farmer.h"
#include "../Towers/Building.h"
#include "../Field/Field.h"
#include "../Graphics/Background/Background.h"
#include "../Graphics/EngineComponents/Window.h"
#include "../Graphics/GameComponents/HexGraphics.h"
#include "../Graphics/GameComponents/UnitGraphics.h"
#include "../Graphics/Input/Mouse.h"
#include "../Graphics/Input/Keyboard.h"
#include <iostream>
class Engine {
private:
  Window game_window;
  Background background;
  void Draw();
  void Input();
  void Update();
  void StartingPosition();
  Field field;
  UnitDirector unit_director;
public:
  Engine();
  void Start();
};