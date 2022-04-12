#include "Farmer.h"

Farmer::Farmer() {
  FarmerBuilder farmer_builder;
  farmer_builder.CreateNewUnit();
  UnitDirector unit_director;
  unit_director.SetUnitBuilder(&farmer_builder);
  unit_director.ConstructUnit();
  farmer = unit_director.GetUnit();
  Unit unit;
  unit.SetUnitType(0);
  unit.SetPosition({1850, 600});
  farmer = std::make_shared<Unit>(unit);
  farmer_graphics = UnitGraphics(*farmer);
  farmer_graphics.SetFarmer(*farmer);
}

std::shared_ptr<Unit>& Farmer::GetUnit() {
  return farmer;
}

UnitGraphics& Farmer::GetGraphics() {
  return farmer_graphics;
}


