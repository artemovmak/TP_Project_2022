#pragma once

#include "../Graphics/GameComponents/UnitGraphics.h"
#include "../Units/Unit.h"

class Farmer {
private:
  std::shared_ptr<Unit> farmer;
  UnitGraphics farmer_graphics;
public:
  Farmer();
  std::shared_ptr<Unit>& GetUnit();
  UnitGraphics& GetGraphics();
};