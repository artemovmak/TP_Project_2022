#pragma once
#include "BuildingBuilder.h"

class TowerBuilder : public BuildingBuilder{
 public:
  TowerBuilder();
  ~TowerBuilder() ;

  void BuildBuildingType() ;
  void BuildCost() ;
  void BuildIncome() ;
  void BuildStrength() ;
  void BuildPosition() ;
};