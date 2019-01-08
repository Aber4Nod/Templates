//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_STACK7ASSIGN_HPP
#define TEMPLATES_STACK7ASSIGN_HPP

#include "stack7decl.hpp"

template<typename T, typename Cont>
template<typename T2, typename Cont2>
Stack<T, Cont>&
Stack<T, Cont>::operator=(Stack<T2, Cont2> const& op2)
{
    elems.clear();                          // remove existing elements
    elems.insert(elems.begin(),             // insert at the beginning
                 op2.elems.begin(),         // all elements from op2
                 op2.elems.end());
    return *this;
}

#endif //TEMPLATES_STACK7ASSIGN_HPP
