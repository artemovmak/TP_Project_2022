#include "TowerBuilder.h"

TowerBuilder::TowerBuilder() : BuildingBuilder() {}
TowerBuilder::~TowerBuilder() = default;

void TowerBuilder::BuildBuildingType() {
  building->SetBuildingType(1);
}
void TowerBuilder::BuildCost() {
  building->SetCost(20);
}
void TowerBuilder::BuildIncome() {
  building->SetIncome(6);
}
void TowerBuilder::BuildStrength() {
  building->SetStrength(1);
}
void TowerBuilder::BuildPosition() {
  building->SetPosition(sf::Vector2i (10, 10));
}

