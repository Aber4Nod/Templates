//
// Created by n.mikhnenko on 07/01/2019.
//

#ifndef TEMPLATES_ADDVALUE_HPP
#define TEMPLATES_ADDVALUE_HPP

template<auto Val, typename T = decltype(Val)>
T addValue(T x)
{
    return x + Val;
};

#endif //TEMPLATES_ADDVALUE_HPP
