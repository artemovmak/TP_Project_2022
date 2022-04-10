#pragma once
#include "UnitBuilder.h"
#include "Farmer.h"
#include "Spearman.h"
#include "Knight.h"
#include "AdvancedKnight.h"

class UnitDirector {
private:
  UnitBuilder* unit_builder;
public:
  UnitDirector();
  ~UnitDirector();

  void SetUnitBuilder(UnitBuilder* Builder);
  std::shared_ptr<Unit> GetUnit();
  void ConstructUnit();
};