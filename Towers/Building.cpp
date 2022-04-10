#include "Building.h"

Building::Building() = default;

void Building::SetCost(size_t value) {
  cost = value;
}

void Building::SetPosition(sf::Vector2i coordinates) {
  position.x = coordinates.x;
  position.y = coordinates.y;
}

void Building::SetStrength(size_t value)  {
  strength = value;
}

void Building::SetBuildingType(size_t value) {
  building_type = value;
}

void Building::SetIncome(size_t value) {
  income = value;
}

size_t Building::GetIncome() const {
  return  income;
}

size_t Building::GetBuildingType() const {
  return building_type;
}

size_t Building::GetStrength() const {
  return strength;
}

sf::Vector2i Building::GetPosition() const {
  return position;
}

size_t Building::GetCost() const {
  return cost;
}

Building::~Building() = default;