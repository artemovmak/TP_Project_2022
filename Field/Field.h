#pragma once

#include "Hex.h"
#include "../Graphics/Vectors/Vector2i.h"

#define FieldVertSize 5
#define FieldHorSize 5

class Field {
 private:
  Hex field[FieldVertSize][FieldHorSize];
public:
  Field() = default;
  Hex& GetHex(Vector2i coords);
};