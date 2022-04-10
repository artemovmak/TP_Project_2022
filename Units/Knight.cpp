#include "Knight.h"

KnightBuilder::KnightBuilder() : UnitBuilder() {}
KnightBuilder::~KnightBuilder() = default;

void KnightBuilder::BuildUnitType() {
  unit->SetUnitType(2);
}
void KnightBuilder::BuildCost() {
  unit->SetCost(30);
}
void KnightBuilder::BuildWage() {
  unit->SetWage(16);
}
void KnightBuilder::BuildStrength() {
  unit->SetStrength(2);
}
void KnightBuilder::BuildPosition() {
  unit->SetPosition(Vector2i (10, 10));
}


