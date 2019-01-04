//
// Created by n.mikhnenko on 04/01/2019.
//

#ifndef TEMPLATES_MAXCOMMON_HPP
#define TEMPLATES_MAXCOMMON_HPP

#include "type_traits"

template<typename T1, typename T2>
std::common_type_t<T1, T2> max(T1 a, T2 b)
{
    return b < a ? a : b;
};

#endif //TEMPLATES_MAXCOMMON_HPP
