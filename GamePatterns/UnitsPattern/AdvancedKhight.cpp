#include "AdvancedKnight.h"

AdvancedKnightBuilder::AdvancedKnightBuilder() : UnitBuilder() {}
AdvancedKnightBuilder::~AdvancedKnightBuilder() = default;

void AdvancedKnightBuilder::BuildUnitType() {
  unit->SetUnitType(0);
}
void AdvancedKnightBuilder::BuildCost() {
  unit->SetCost(10);
}
void AdvancedKnightBuilder::BuildWage() {
  unit->SetWage(2);
}
void AdvancedKnightBuilder::BuildStrength() {
  unit->SetStrength(0);
}
void AdvancedKnightBuilder::BuildPosition() {
  unit->SetPosition(sf::Vector2i (10, 10));
}

