#pragma once
#include "BuildingBuilder.h"

class AdvancedTowerBuilder : public BuildingBuilder{
 public:
  AdvancedTowerBuilder();
  ~AdvancedTowerBuilder();

  void BuildBuildingType();
  void BuildCost();
  void BuildIncome();
  void BuildStrength();
  void BuildPosition();
};