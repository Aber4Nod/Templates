//
// Created by n.mikhnenko on 05/01/2019.
//

#ifndef TEMPLATES_STACK_HPP
#define TEMPLATES_STACK_HPP

#include <vector>
#include <cassert>

template<typename T>
class Stack
{
private:
    std::vector<T> elems;           // elements

public:
    void push(T const& elem);       // push elements
    void pop();                     // pop elements
    T const& top() const;           // return top element
    bool empty() const {            // return whether the stack is empty
        return elems.empty();
    }

    void printOn(std::ostream& strm) const {
        for(T const& elem : elems)
           strm << elem << ' ';     // call << for each element
    }
};

template<typename T>
void Stack<T>::push(const T &elem)
{
    elems.push_back(elem);          // append copy of passed elem
}

template<typename T>
void Stack<T>::pop()
{
    assert(!elems.empty());
    elems.pop_back();               // remove last element
}

template<typename T>
T const& Stack<T>::top() const
{
    assert(!elems.empty());
    return elems.back();            // return copy of last element
}

#endif //TEMPLATES_STACK_HPP
