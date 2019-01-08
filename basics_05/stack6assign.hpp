//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_STACK6ASSIGN_HPP
#define TEMPLATES_STACK6ASSIGN_HPP

#include "stack6decl.hpp"

template<typename T>
template<typename T2>
Stack<T>& Stack<T>::operator=(Stack<T2> const& op2)
{
    elems.clear();                          // remove existing elements
    elems.insert(elems.begin(),             // insert at the beginning
                 op2.elems.begin(),         // all elements from op2
                 op2.elems.end());
    return *this;
}

#endif //TEMPLATES_STACK6ASSIGN_HPP
