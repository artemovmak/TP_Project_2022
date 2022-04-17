#pragma once

#include "../Graphics/Graphics.h"

class Engine {
 public:
  Engine() = default;
  void Update();
  void Start();
 private:
  Graphics graphics;
  Field field;
};