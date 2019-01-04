//
// Created by n.mikhnenko on 04/01/2019.
//

#ifndef TEMPLATES_MAXDECLTYPEDECAY_HPP
#define TEMPLATES_MAXDECLTYPEDECAY_HPP

#include <type_traits>

template<typename T1, typename T2>
auto max(T1 a, T2 b) -> typename std::decay<decltype(true?a:b)>::type
{
    return b < a ? a : b;
}

#endif //TEMPLATES_MAXDECLTYPEDECAY_HPP
