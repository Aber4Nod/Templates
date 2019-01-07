//
// Created by n.mikhnenko on 05/01/2019.
//

#ifndef TEMPLATES_STACK3_HPP
#define TEMPLATES_STACK3_HPP

#include <vector>
#include <cassert>

// we choosing std::vector<> as the default value for managing the elements
template<typename T, typename Cont = std::vector<T>>
class Stack
{
private:
    Cont elems;                 // elements

public:
    void push(T const& elem);   // push element
    void pop();                 // pop element
    T const& top() const;       // return top element
    bool empty() const {        // return whether the stack is empty
        return elems.empty();
    }
};

template<typename T, typename Cont>
void Stack<T, Cont>::push(const T& elem)
{
    elems.push_back(elem);      // append copy of passed elem
}

template<typename T, typename Cont>
void Stack<T, Cont>::pop()
{
    assert(!elems.empty());
    elems.pop_back();           // remove last element
}

template<typename T, typename Cont>
T const& Stack<T, Cont>::top() const
{
    assert(!elems.empty());
    return elems.back();        // return copy of last element
}

#endif //TEMPLATES_STACK3_HPP
