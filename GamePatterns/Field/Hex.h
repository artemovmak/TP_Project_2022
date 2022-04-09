#pragma once

#include <TP_Project_2022/GamePatterns/TowersPattern/BuildingDirector.h>
#include <TP_Project_2022/GamePatterns/UnitPattern/UnitDirector.h>

enum HexInterior {
  Nothing = 0;
  Units = 1;
  Buildings = 2;
};

class Hex {
 private:
  HexInterior interior_;
  Unit unit_;
  Building building_;
 public:
  void SetHexInterior(HexInterior value);
  void SetUnit(Unit unit);
  void SetBuilding(Building building);

  HexInterior GetHexInterior();
  Unit GetUnit();
  Building GetBuilding();
};