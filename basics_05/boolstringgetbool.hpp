//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_BOOLSTRINGGETBOOL_HPP
#define TEMPLATES_BOOLSTRINGGETBOOL_HPP

#include "boolstring.hpp"


// full specialization for BoolString::getValue<> for bool
template<>
inline bool BoolString::get<bool>() const {
    return value == "true" || value == "1" || value == "on";
}

#endif //TEMPLATES_BOOLSTRINGGETBOOL_HPP
