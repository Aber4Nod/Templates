//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_STACK7DECL_HPP
#define TEMPLATES_STACK7DECL_HPP

#include <deque>

template<typename T, typename Cont = std::deque<T>>
class Stack
{
private:
    Cont elems;                     // elements

public:
    void push(T const&);            // push element
    void pop();                     // pop element
    T const& top() const;           // return top element
    bool empty() const {            // return whether the stack is empty
        return elems.empty();
    }

    // assign of elements of type T2
    template<typename T2, typename Cont2>
    Stack& operator= (Stack<T2, Cont2> const&);
    // to get access to private members of Stack<T2> for any type T2:
    template<typename, typename> friend class Stack;
};

#endif //TEMPLATES_STACK7DECL_HPP
