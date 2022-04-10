#pragma once

#include <SFML/Graphics.hpp>
#include "../../Graphics/Vectors/Vector2i.h"
#include "../EngineComponents/Window.h"
class Mouse {
 public:
  static Vector2i GetCoords(Window);
  static bool IsLeftButtonPressed();
};