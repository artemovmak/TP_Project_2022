#pragma once

#include <cstddef>

#include "../Coords/Coords.h"

class Unit {
 public:
  Unit();

  void SetUnitType(size_t value);
  void SetCost(size_t value);
  void SetWage(size_t value);
  void SetStrength(size_t value);
  void SetPosition(Coords<int> coordinates);

  size_t GetUnitType() const;
  size_t GetCost() const;
  size_t GetWage() const;
  size_t GetStrength() const;
  Coords<int> GetPosition() const;

  ~Unit() = default;
 private:
  size_t unit_type_;
  size_t cost_;
  size_t wage_;
  size_t strength_;
  Coords<int> position_;
};
