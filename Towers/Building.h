#pragma once
#include <memory>
#include <SFML/Graphics.hpp>
class Building {
 private:
  size_t building_type;
  size_t cost;
  size_t income;
  size_t strength;
  sf::Vector2i position;
 public:
  Building();

  void SetBuildingType(size_t value);
  void SetCost(size_t value);
  void SetIncome(size_t value);
  void SetStrength(size_t value);
  void SetPosition(sf::Vector2i coordinates);

  size_t GetBuildingType() const;
  size_t GetCost() const;
  size_t GetIncome() const;
  size_t GetStrength() const;
  sf::Vector2i GetPosition() const;

  ~Building();
};
