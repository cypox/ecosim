#pragma once

#include "stockpile.hpp"

#include <string>
#include <vector>


class Entity {
public:
  Entity();

  void make_order();

  void produce();

  void consume();

  void step();

private:
  int _id;
  std::string _name;
  std::vector<StockpileItem> _storage;
  double _cash;
  /* EntityType _type; */
};
