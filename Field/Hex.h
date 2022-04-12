#pragma once

#include "../Towers/BuildingDirector.h"
#include "../Units/UnitDirector.h"

enum HexInterior {
  Nothing = 0,
  Units = 1,
  Buildings = 2
};

class Hex {
 private:
  HexInterior interior_ = Nothing;
  Unit unit_;
  Building building_;
 public:
  Hex() = default;
  size_t owner = 1;
  void SetHexInterior(HexInterior value);
  void SetUnit(Unit unit);
  void SetBuilding(Building building);
  Hex GetHex();
  HexInterior GetHexInterior();
  Unit& GetUnit();
  Building GetBuilding();
};