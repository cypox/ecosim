#include "include/ecosim.hpp"


int main(int argc, char** argv)
{
  ArgumentParser parser(argc, argv);
  bool starts_running = parser.exists("--start-running");
  bool no_stepping = parser.exists("--no-stepping");
  int framerate = parser.get_int("--frame-rate", 60);
  int rng_seed = parser.get_long("--seed", time(nullptr));
  int simulation_steps = parser.get_int("--steps", 1000);

  World w;

  while(--simulation_steps)
  {
    w.step();
  }  

  return 0;
}
