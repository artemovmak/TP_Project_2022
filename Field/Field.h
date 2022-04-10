#pragma once

#include "Hex.h"
#include "../Graphics/Vectors/Vector2i.h"

#define FieldVertSize 20
#define FieldHorSize 20

class Field {
 private:
  Hex field[FieldVertSize][FieldHorSize];
public:
  Field() = default;
  Hex& GetHex(Vector2i coords);
};