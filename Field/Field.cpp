#include "Field.h"

Field& Field::GetInstance() {
  static Field singleton;
  return singleton;
}

Hex& Field::GetHex(Vector2i coords) {
  return field[coords.GetX()][coords.GetY()];
}