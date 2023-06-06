#include "include/argparse.hpp"

#include <algorithm>


ArgumentParser::ArgumentParser(int argc, char **argv) : begin(argv) , end(argv + argc)
{
  return;
}

std::string ArgumentParser::get_string(const std::string &option, const std::string def) const
{
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end) return std::string(*itr);
    return def;
}

int ArgumentParser::get_int(const std::string &option, const int def) const
{
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end) return (int)std::stof(*itr);
    return def;
}

int ArgumentParser::get_long(const std::string &option, const long def) const
{
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end) return (long)std::stold(*itr);
    return def;
}

bool ArgumentParser::exists(const std::string &option) const
{
  return std::find(begin, end, option) != end;
}
