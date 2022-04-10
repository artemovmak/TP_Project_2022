#pragma once
#include "../Units/Unit.h"
#include "../Towers/Building.h"
#include "../Field/Field.h"
#include "../Graphics/Background/Background.h"
#include "../Graphics/EngineComponents/Window.h"

class Engine {
private:
  Window game_window;
  Background background;
public:
  Engine() = default;
  Start();
};