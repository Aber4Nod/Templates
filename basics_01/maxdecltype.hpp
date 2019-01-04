//
// Created by n.mikhnenko on 04/01/2019.
//

#ifndef TEMPLATES_MAXDECLTYPE_HPP
#define TEMPLATES_MAXDECLTYPE_HPP

// C++11 approach for declaring that the return type is derived from operator ?:
template<typename T1, typename T2>
auto max(T1 a, T2 b) -> decltype(b<a?a:b)
{
    return b < a ? a : b;
};

#endif //TEMPLATES_MAXDECLTYPE_HPP
