#pragma once
#include <memory>
#include "../Graphics/Vectors/Vector2i.h"
#include "../Graphics/GameComponents/UnitGraphics.h"
class Unit {
private:
  size_t unit_type;
  size_t cost;
  size_t wage;
  size_t strength;
  Vector2i position;
  UnitGraphics unit_graph;
public:
  Unit();

  void SetUnitType(size_t value);
  void SetCost(size_t value);
  void SetWage(size_t value);
  void  SetStrength(size_t value);
  void SetPosition(Vector2i coordinates);
  void SetTexture(sf::Texture texture);

  size_t GetUnitType() const;
  size_t GetCost() const;
  size_t GetWage() const;
  size_t GetStrength() const;
  Vector2i GetPosition() const;
  UnitGraphics GetGraphics() const;

  ~Unit();
};
