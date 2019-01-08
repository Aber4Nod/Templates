//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_STACK5ASSIGN_HPP
#define TEMPLATES_STACK5ASSIGN_HPP

#include "stack5decl.hpp"

template<typename T>
template<typename T2>
Stack<T>& Stack<T>::operator=(Stack<T2> const& op2)
{
    Stack<T2> tmp(op2);                 // create a copy of the assigned stack

    elems.clear();                      // remove existing elements
    while(!tmp.empty())                 // copy all elements
    {
        elems.push_front(tmp.top());
        tmp.top();
    }
    return *this;
}

#endif //TEMPLATES_STACK5ASSIGN_HPP
