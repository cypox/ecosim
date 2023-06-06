#pragma once

#include "exchange.hpp"

#include <string>
#include <vector>
#include <unordered_map>


class Entity {
public:
  Entity(Exchange&);

  void make_order();

  void produce();

  void consume();

  void step();

private:
  int _id;
  std::string _name;
  std::unordered_map<int, int> _storage;
  double _cash;
  /* EntityType _type; */

  std::unordered_map<int, std::vector<int>> _orders;

  Exchange& _market;
};
