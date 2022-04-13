#pragma once
#include "UnitBuilder.h"

class SpearmanBuilder : public UnitBuilder{
private:
public:
  SpearmanBuilder();
  ~SpearmanBuilder() ;

  void BuildUnitType() ;
  void BuildCost() ;
  void BuildWage() ;
  void BuildStrength() ;
  void BuildPosition() ;
  void BuildTexture();
};