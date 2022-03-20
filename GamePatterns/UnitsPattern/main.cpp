#include <iostream>
#include "UnitDirector.h"

int main() {
  // EXAMPLE OF CREATING TWO UNITS
  UnitDirector director;
  FarmerBuilder farmer;
  director.SetUnitBuilder(&farmer);
  director.ConstructUnit();
  std::shared_ptr<Unit> unit1 = director.GetUnit();

  SpearmanBuilder spearman;
  director.SetUnitBuilder(&spearman);
  director.ConstructUnit();
  std::shared_ptr<Unit> unit2 = director.GetUnit();
  std::cout << unit1->GetCost() << std::endl;
  std::cout << unit2->GetCost() << std::endl;
}
