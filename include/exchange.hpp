#pragma once

#include "order_book.hpp"

#include <unordered_map>


class Exchange {
public:
  Exchange();

private:
  std::unordered_map<int, OrderBook> _books;
};
