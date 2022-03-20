#pragma once
#include "Building.h"

class BuildingBuilder {
 protected:
  std::shared_ptr<Building> building;
 public:
  BuildingBuilder();

  std::shared_ptr<Unit> GetBuilding();

  void CreateNewBuilding();

  virtual void BuildBuildingType() = 0;
  virtual void BuildCost() = 0;
  virtual void BuildIncome() = 0;
  virtual void BuildStrength() = 0;
  virtual void BuildPosition() = 0;
};