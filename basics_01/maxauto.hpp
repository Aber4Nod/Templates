//
// Created by n.mikhnenko on 04/01/2019.
//

#ifndef TEMPLATES_MAXAUTO_HPP
#define TEMPLATES_MAXAUTO_HPP

// C++14 approach - deducing th return type by letting the compiler for find out
template<typename T1, typename T2>
auto max(T1 a, T2 b)
{
    return b < a ? a : b;
};

#endif //TEMPLATES_MAXAUTO_HPP
