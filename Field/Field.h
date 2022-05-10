#pragma once

#include "Hex.h"
#include "../Configuration/Configuration.h"

class Field {
 private:
  Hex field[kFieldHeight][kFieldWidth];
public:
  Field();
  Hex& GetHex(Coords<int> coords);
};