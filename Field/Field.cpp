#include "Field.h"

Hex& Field::GetHex(Vector2i coords) {
  return field[coords.GetX()][coords.GetY()];
}