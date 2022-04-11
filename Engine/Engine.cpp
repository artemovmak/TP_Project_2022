#include "Engine.h"

Engine::Engine() {
  FarmerBuilder farmer_builder;
  farmer_builder.CreateNewUnit();
  UnitDirector unit_director;
  unit_director.SetUnitBuilder(&farmer_builder);
  unit_director.ConstructUnit();
  ptr = unit_director.GetUnit();
  Unit unit;
  unit.SetUnitType(0);
  unit.SetPosition({30, 30});
  ptr = std::make_shared<Unit>(unit);
}

void Engine::Start() {
  while (game_window.IsOpen()) {
    StartingPosition();
    Input();
    Update();
    Draw();
  }
}