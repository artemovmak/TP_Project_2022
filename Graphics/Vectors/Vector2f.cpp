#include "Vector2f.h"

Vector2f::Vector2f() {
  vector.x = 0;
  vector.y = 0;
}

Vector2f::Vector2f(int a, int b) {
  vector.x = static_cast<float>(a);
  vector.y =  static_cast<float>(b);
}

Vector2f::Vector2f(float a, float b) {
  vector.x = a;
  vector.y =  b;
}

void Vector2f::SetVector2f(float a, float b) {
  vector.x = a;
  vector.y = b;
}

Vector2f Vector2f::GetVector2f() {
  return *this;
}

float Vector2f::GetX() {
  return vector.x;
}

float Vector2f::GetY() {
  return vector.y;
}


