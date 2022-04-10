#pragma once
#include "BuildingBuilder.h"

class FarmBuilder : public BuildingBuilder{
private:
  size_t amount;
 public:
  FarmBuilder();
  ~FarmBuilder() ;

  void BuildBuildingType() ;
  void BuildCost() ;
  void BuildIncome() ;
  void BuildStrength() ;
  void BuildPosition() ;
};