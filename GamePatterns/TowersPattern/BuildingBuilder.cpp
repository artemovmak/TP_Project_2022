#include "BuildingBuilder.h"

BuildingBuilder::BuildingBuilder() = default;

std::shared_ptr<Building> BuildingBuilder::GetBuilding() {
  return building;
}

void BuildingBuilder::CreateNewBuilding() {
  building.reset(new Building);
}