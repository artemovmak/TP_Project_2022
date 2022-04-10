#include "Farmer.h"

FarmerBuilder::FarmerBuilder() : UnitBuilder() {}
FarmerBuilder::~FarmerBuilder() = default;

void FarmerBuilder::BuildUnitType() {
  unit->SetUnitType(0);
}
void FarmerBuilder::BuildCost() {
  unit->SetCost(10);
}
void FarmerBuilder::BuildWage() {
  unit->SetWage(2);
}
void FarmerBuilder::BuildStrength() {
  unit->SetStrength(0);
}
void FarmerBuilder::BuildPosition() {
  unit->SetPosition(Vector2i (10, 10));
}

