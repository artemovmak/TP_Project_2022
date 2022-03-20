#pragma once
#include "UnitBuilder.h"

class SpearmanBuilder : public UnitBuilder{
public:
  SpearmanBuilder();
  ~SpearmanBuilder() ;

  void BuildUnitType() ;
  void BuildCost() ;
  void BuildWage() ;
  void BuildStrength() ;
  void BuildPosition() ;
};