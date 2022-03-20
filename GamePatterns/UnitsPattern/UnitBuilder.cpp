#include "UnitBuilder.h"

UnitBuilder::UnitBuilder() = default;

std::shared_ptr<Unit> UnitBuilder::GetUnit() {
  return unit;
}

void UnitBuilder::CreateNewUnit() {
  unit.reset(new Unit);
}