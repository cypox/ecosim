#include "include/entity.hpp"


Entity::Entity(Exchange& market) : _market(market)
{
  return;
}

void Entity::make_order()
{
  _orders[0].push_back(_market.add_order());
}

void Entity::produce()
{
  _storage[0] ++;
  _storage[1] --;
}

void Entity::consume()
{
  _storage[0] --;
}

void Entity::step()
{
  // TODO: make this a virtual func and implement it depending on type
  if (_storage.at(1) > 0 )
  {
    produce();
  }
  if (_storage.at(0) > 0)
  {
    consume();
  }
  else
  {
    make_order();
  }
  return;
}
