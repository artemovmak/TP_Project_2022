#pragma once

#include <cstddef>
#include <memory>

#include "../Coords/Coords.h"
#include "../Units/Unit.h"

enum HexInterior {
  Nothing = 0,
  Units = 1,
  Buildings = 2,
};

class Hex {
 public:
  Hex();
  void SetHexInterior(HexInterior value);
  HexInterior GetHexInterior() const;
  void SetUnit(Unit);
  Unit& GetUnit();
  void SetBuilding(size_t);
  size_t GetBuilding() const;
  void SetOwner(size_t);
  size_t GetOwner() const;
  void SetPosition(Coords<int>);
  Coords<int> GetPosition() const;
 private:
  HexInterior interior_;
  Unit unit_;
  size_t building_type_;
  size_t owner_;
  Coords<int> position_;
};