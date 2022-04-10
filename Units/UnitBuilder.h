#pragma once
#include "Unit.h"

class UnitBuilder {
protected:
  std::shared_ptr<Unit> unit;
public:
  UnitBuilder();

  std::shared_ptr<Unit> GetUnit();

  void CreateNewUnit();

  virtual void BuildUnitType() = 0;
  virtual void BuildCost() = 0;
  virtual void BuildWage() = 0;
  virtual void BuildStrength() = 0;
  virtual void BuildPosition() = 0;
};