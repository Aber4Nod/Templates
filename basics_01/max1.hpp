//
// Created by n.mikhnenko on 04/01/2019.
//

#ifndef TEMPLATES_MAX1_HPP
#define TEMPLATES_MAX1_HPP

template<typename T>
T max(T a, T b)
{
    return b < a ? a : b;
}

#endif //TEMPLATES_MAX1_HPP
