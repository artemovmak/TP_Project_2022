#include "AdvancedTowerBuilder.h"

AdvancedTowerBuilder::AdvancedTowerBuilder() : BuildingBuilder() {}
AdvancedTowerBuilder::~AdvancedTowerBuilder() = default;

void AdvancedTowerBuilder::BuildBuildingType() {
  building->SetBuildingType(2);
}

void AdvancedTowerBuilder::BuildCost() {
  building->SetCost(30);
}

void AdvancedTowerBuilder::BuildIncome() {
  building->SetIncome(16);
}

void AdvancedTowerBuilder::BuildStrength() {
  building->SetStrength(2);
}

void AdvancedTowerBuilder::BuildPosition() {
  building->SetPosition(sf::Vector2i (10, 10));
}


