#pragma once

#include "Hex.h"

#define FieldVertSize 20
#define FieldHorSize 20

#define UnitMoveRange 5

class Field {
 private:
  Hex field[FieldVertSize][FieldHorSize];
public:
  Field();
  Hex& GetHex(Vector<int> coords);
};