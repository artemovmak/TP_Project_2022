#include "Vector2i.h"

Vector2i::Vector2i() {
  vector.x = 0;
  vector.y = 0;
}

Vector2i::Vector2i(int a, int b) {
  vector.x = a;
  vector.y = b;
}

void Vector2i::SetVector2i(int a, int b) {
  vector.x = a;
  vector.y = b;
}
void Vector2i::SetVector2i(Vector2i other) {
  vector.x = other.vector.x;
  vector.y = other.vector.y;
}

int Vector2i::GetX() {
  return vector.x;
}

int Vector2i::GetY() {
  return vector.y;
}

Vector2i Vector2i::GetVector2i() {
  return *this;
}

