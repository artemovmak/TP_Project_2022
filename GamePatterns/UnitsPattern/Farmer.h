#pragma once
#include "UnitBuilder.h"

class FarmerBuilder : public UnitBuilder{
public:
  FarmerBuilder();
  ~FarmerBuilder() ;

  void BuildUnitType() ;
  void BuildCost() ;
  void BuildWage() ;
  void BuildStrength() ;
  void BuildPosition() ;
};