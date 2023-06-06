#pragma once


class OrderBook {
public:
  OrderBook();

  void add();

  void cancel();

  void execute();

private:
  int _instrument_id;
};
