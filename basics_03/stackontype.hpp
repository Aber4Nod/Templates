//
// Created by n.mikhnenko on 05/01/2019.
//

#ifndef TEMPLATES_STACKONTYPE_HPP
#define TEMPLATES_STACKONTYPE_HPP

#include <array>
#include <cassert>

template<typename T, std::size_t Maxsize>
class Stack
{
private:
    std::array<T, Maxsize> elems;          // elements
    std::size_t numElems;                  // current number of elements

public:
    Stack();                               // constructor
    void push(T const& elem);              // push element
    void pop();                            // pop element
    T const& top() const;                  // return top element
    bool empty() const {                   // return whether the stack is empty
        return numElems == 0;
    }
    std::size_t size() const {             // return current number of elements
        return numElems;
    }
};

template<typename T, std::size_t Maxsize>  // start with no elements
Stack<T, Maxsize>::Stack() : numElems(0)
{
    // nothing else to do
}

template<typename T, std::size_t Maxsize>
void Stack<T, Maxsize>::push(T const& elem)
{
    assert(numElems < Maxsize);
    elems[numElems] = elem;                // append element
    ++numElems;                            // increment number of elements
}

template<typename T, std::size_t Maxsize>
void Stack<T, Maxsize>::pop()
{
    assert(!elems.empty());
    --numElems;                            // decrement number of elements
}

template<typename T, std::size_t Maxsize>
T const& Stack<T, Maxsize>::top() const
{
    assert(!elems.empty());
    return elems[numElems - 1];            // return last element
}

#endif //TEMPLATES_STACKONTYPE_HPP
