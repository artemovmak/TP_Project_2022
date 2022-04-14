#include "Field.h"

Field::Field() {
  for (int i = 0; i < FieldVertSize; ++i) {
    for (int j = 0; j < FieldHorSize; ++j) {
      GetHex({i, j}).SetPosition({(j % 2 == 1 ? 75 : 50) + i  * 50, 50 + j * 40});
    }
  }
}

Hex& Field::GetHex(Vector<int> coords) {
  return field[coords.x][coords.y];
}