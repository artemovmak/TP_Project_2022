#pragma once

#include "Hex.h"
#include "Vector2.h"

#define FieldVertSize 30
#define FieldHorSize 30

class Field {
 private:
  Hex field[FieldVertSize][FieldHorSize];

  Field() {}
  Field(const Field&) = delete;
  Field& operator=(const Field&) = delete;
 public:
  static Field& GetInstance();

  Hex& GetHex(Vector2<int> coords);
};