#pragma once
#include "BuildingBuilder.h"
#include "FarmBuilder.h"
#include "TowerBuilder.h"
#include "AdvancedTowerBuilder.h"

class BuildingDirector {
 private:
  BuildingBuilder* building_builder;
 public:
  BuildingDirector();
  ~BuildingDirector();

  void SetBuildingDirector(BuildingBuilder* Builder);
  std::shared_ptr<Building> GetBuilding();
  void ConstructBuilding();
};