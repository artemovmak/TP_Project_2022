#include "Unit.h"

Unit::Unit() = default;

void Unit::SetCost(size_t value) {
  cost = value;
}

void Unit::SetPosition(Vector2i coordinates) {
  position.SetVector2i(coordinates);
}

void Unit::SetStrength(size_t value)  {
  strength = value;
}

void Unit::SetUnitType(size_t value) {
  unit_type = value;
}

void Unit::SetWage(size_t value) {
  wage = value;
}

size_t Unit::GetWage() const {
  return  wage;
}

size_t Unit::GetUnitType() const {
  return unit_type;
}

size_t Unit::GetStrength() const {
  return strength;
}

Vector2i Unit::GetPosition() const {
  return position;
}

size_t Unit::GetCost() const {
  return cost;
}
Unit::~Unit() = default;