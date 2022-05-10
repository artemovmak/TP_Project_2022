#include "Unit.h"

Unit::Unit() : unit_type_(0), cost_(0), wage_(0), strength_(0), position_(0, 0) {}

void Unit::SetCost(size_t value) {
  cost_ = value;
}

void Unit::SetPosition(Coords<int> coordinates) {
  position_.SetVector(coordinates);
}

void Unit::SetWage(size_t value) {
  wage_ = value;
}

void Unit::SetStrength(size_t value)  {
  strength_ = value;
}

void Unit::SetUnitType(size_t value) {
  unit_type_ = value;
}

size_t Unit::GetWage() const {
  return wage_;
}

size_t Unit::GetUnitType() const {
  return unit_type_;
}

size_t Unit::GetStrength() const {
  return strength_;
}

Coords<int> Unit::GetPosition() const {
  return position_;
}

size_t Unit::GetCost() const {
  return cost_;
}
