#include "Field.h"

Field::Field() {
  for (int i = 0; i < kFieldHeight; ++i) {
    for (int j = 0; j < kFieldWidth; ++j) {
      Coords<int> coords = {kIndent + (j % 2)
                            * static_cast<int>((kCircleShapeRadius
                                                + kHexOutlineThickness)
                                                * 0.87)
                            + i * static_cast<int>((kCircleShapeRadius +
                                                    kHexOutlineThickness)
                                                    * 1.7),
                            kIndent + j *
                            static_cast<int>((kCircleShapeRadius) * 1.7)};
      GetHex({i, j}).SetPosition(coords);
    }
  }
}

Hex& Field::GetHex(Coords<int> coords) {
  return field[coords.x][coords.y];
}