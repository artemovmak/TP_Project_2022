#pragma once

#include "Hex.h"
#include "../Graphics/Vectors/Vector2i.h"

#define FieldVertSize 30
#define FieldHorSize 30

class Field {
 private:
  Hex field[FieldVertSize][FieldHorSize];
  Field() = default;
  Field(const Field&) = delete;
  Field& operator=(const Field&) = delete;
public:
  static Field& GetInstance();
  Hex& GetHex(Vector2i coords);
};