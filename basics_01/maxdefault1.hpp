//
// Created by n.mikhnenko on 04/01/2019.
//

#ifndef TEMPLATES_MAXDEFAULT_HPP
#define TEMPLATES_MAXDEFAULT_HPP

#include <type_traits>

template<typename T1, typename T2,
        typename RT = std::decay_t<decltype(true ? T1() : T2())>>
RT max(T1 a, T2 b)
{
    return b < a ? a : b;
};

#endif //TEMPLATES_MAXDEFAULT_HPP