#pragma once
#include "UnitBuilder.h"

class KnightBuilder : public UnitBuilder{
public:
  KnightBuilder();
  ~KnightBuilder() ;

  void BuildUnitType() ;
  void BuildCost() ;
  void BuildWage() ;
  void BuildStrength() ;
  void BuildPosition() ;
};