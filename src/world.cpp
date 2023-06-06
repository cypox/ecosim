#include "include/world.hpp"


World::World()
{
  return;
}

void World::step()
{
  for (auto& entity: _entities)
  {
    entity.step();
  }
  return;
}
