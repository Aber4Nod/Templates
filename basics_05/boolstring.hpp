//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_BOOLSTRING_HPP
#define TEMPLATES_BOOLSTRING_HPP

#include <string>

class BoolString
{
private:
    std::string value;
public:
    BoolString (std::string const& s) : value(s) {}
    template<typename T = std::string>                  // get value (converted to T)
    T get() const { return value; }
};

#endif //TEMPLATES_BOOLSTRING_HPP
