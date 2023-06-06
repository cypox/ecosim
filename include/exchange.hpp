#pragma once

#include "order_book.hpp"

#include <unordered_map>


class Exchange {
public:
  Exchange();

  int add_order();

  void cancel_order(int);

private:
  std::unordered_map<int, OrderBook> _books;
};
