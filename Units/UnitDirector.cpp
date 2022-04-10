#include "UnitDirector.h"

UnitDirector::UnitDirector() : unit_builder(nullptr) {}
UnitDirector::~UnitDirector() = default;

void UnitDirector::SetUnitBuilder(UnitBuilder *Builder) {
  unit_builder = Builder;
}

std::shared_ptr<Unit> UnitDirector::GetUnit() {
  return unit_builder->GetUnit();
}

void UnitDirector::ConstructUnit() {
  unit_builder->CreateNewUnit();
  unit_builder->BuildCost();
  unit_builder->BuildWage();
  unit_builder->BuildStrength();
  unit_builder->BuildUnitType();
  unit_builder->BuildPosition();
}