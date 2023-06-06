#pragma once

#include "entity.hpp"
#include "exchange.hpp"

#include <vector>


class World {
public:
  World();

  void step();

private:
  Exchange _market; // TODO: when simulating a big market, whis will become a set of exchanges
  std::vector<Entity> _entities;
};
