#include "Hex.h"

Hex::Hex() : interior_(Nothing), unit_(nullptr), building_type_(0), owner_(0) {}

void Hex::SetHexInterior(HexInterior value) {
  interior_ = value;
}

HexInterior Hex::GetHexInterior() const {
  return interior_;
}

void Hex::SetUnit(Unit unit) {
  unit_ = std::make_shared<Unit>(unit);
}

Unit& Hex::GetUnit() const {
  return *unit_;
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

void Hex::SetPosition(Vector<int> v) {
  if (unit_ != nullptr) {
    unit_->SetPosition(v);
  }
  position_.SetVector(v);
}

Vector<int> Hex::GetPosition() const {
  return position_;
}