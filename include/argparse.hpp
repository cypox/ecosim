#pragma once

#include <algorithm>
#include <string>


class ArgumentParser
{
public:
    ArgumentParser(int argc, char **argv);

    std::string get_string(const std::string &option, const std::string def = "") const;

    int get_int(const std::string &option, const int def = 0) const;

    int get_long(const std::string &option, const long def = 0) const;

    bool exists(const std::string &option) const;

private:
    char **begin, **end;
};
