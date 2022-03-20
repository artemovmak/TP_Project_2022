#include "Spearman.h"

SpearmanBuilder::SpearmanBuilder() : UnitBuilder() {}
SpearmanBuilder::~SpearmanBuilder() = default;

void SpearmanBuilder::BuildUnitType() {
  unit->SetUnitType(1);
}
void SpearmanBuilder::BuildCost() {
  unit->SetCost(20);
}
void SpearmanBuilder::BuildWage() {
  unit->SetWage(6);
}
void SpearmanBuilder::BuildStrength() {
  unit->SetStrength(1);
}
void SpearmanBuilder::BuildPosition() {
  unit->SetPosition(sf::Vector2i (10, 10));
}

