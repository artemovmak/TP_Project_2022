#include "BuildingDirector.h"

BuildingDirector::BuildingDirector() : building_builder(nullptr) {}
BuildingDirector::~BuildingDirector() = default;

void BuildingDirector::SetBuildingDirector(BuildingBuilder *Builder) {
  building_builder = Builder;
}

std::shared_ptr<Building> BuildingDirector::GetBuilding() {
  return building_builder->GetBuilding();
}

void BuildingDirector::ConstructBuilding() {
  building_builder->CreateNewBuilding();
  building_builder->BuildCost();
  building_builder->BuildIncome();
  building_builder->BuildStrength();
  building_builder->BuildBuildingType();
  building_builder->BuildPosition();
}