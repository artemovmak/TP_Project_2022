#include "Field.h"

static Field& Hex::GetInstance() {
  static Field singleton;
  return singleton;
}

Hex& Hex::GetHex(Vector2<int> coords) {
  return field[coords.x][coords.y];
}