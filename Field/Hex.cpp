#include "Hex.h"

Hex::Hex() : interior_(Nothing), unit_(), building_type_(0), owner_(0) {}

void Hex::SetHexInterior(HexInterior value) {
  interior_ = value;
}

HexInterior Hex::GetHexInterior() const {
  return interior_;
}

void Hex::SetUnit(Unit unit) {
  unit_ = unit;
}

Unit& Hex::GetUnit() {
  return unit_;
}

void Hex::SetBuilding(size_t type) {
  building_type_ = type;
}

size_t Hex::GetBuilding() const {
  return building_type_;
}

void Hex::SetOwner(size_t owner) {
  owner_ = owner;
}

size_t Hex::GetOwner() const {
  return owner_;
}

void Hex::SetPosition(Coords<int> v) {
  if (this->GetHexInterior() == Units) {
    unit_.SetPosition(v);
  }
  position_.SetVector(v);
}

Coords<int> Hex::GetPosition() const {
  return position_;
}