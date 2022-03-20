#include "FarmBuilder.h"

FarmBuilder::FarmBuilder() : BuildingBuilder() {
  amount++;
}
FarmBuilder::~FarmBuilder() = default;

void FarmBuilder::BuildBuildingType() {
  building->SetBuildingType(0);
}
void FarmBuilder::BuildCost() {
  building->SetCost(10 + 2 * amount);
}
void FarmBuilder::BuildIncome() {
  building->SetIncome(8);
}
void FarmBuilder::BuildStrength() {
  building->SetStrength(0);
}
void FarmBuilder::BuildPosition() {
  building->SetPosition(sf::Vector2i (10, 10));
}

