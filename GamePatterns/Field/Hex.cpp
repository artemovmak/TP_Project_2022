#include "Hex.h"

void Hex::SetHexInterior(HexInterior value) {
  interior_ = value;
}

void Hex::SetBuilding(Building building) {
  if (interior_ == Buildings) {
    building_ = building;
  }
}

void Hex::SetUnit(Unit unit) {
  if (interior_ == Units) {
    unit_ = unit;
  }
}

HexInterior Hex::GetHexInterior() {
  return interior_;
}

Building Hex::GetBuilding() {
  return building_;
}

Unit Hex::GetUnit() {
  return unit_;
}