#pragma once
#include "UnitBuilder.h"
class AdvancedKnightBuilder : public UnitBuilder{
public:
  AdvancedKnightBuilder();
  ~AdvancedKnightBuilder() ;

  void BuildUnitType() ;
  void BuildCost() ;
  void BuildWage() ;
  void BuildStrength() ;
  void BuildPosition() ;
};