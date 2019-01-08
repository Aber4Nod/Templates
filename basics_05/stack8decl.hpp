//
// Created by n.mikhnenko on 09/01/2019.
//

#ifndef TEMPLATES_STACK8DECL_HPP
#define TEMPLATES_STACK8DECL_HPP

#include <deque>

template<typename T,
        template<typename Elem> class Cont = std::deque>        // since C++17
//      template<class Elem> class Cont = std::deque>           // before C++17 (also because of default template arguments of templ. templ. args were not considered
//                                                              // before C++17 (ex. allocators), there will be error here: see stack9.hpp for ex. of resolving it)
class Stack
{
private:
    Cont<T> elems;                  // elements

public:
    void push(T const&);            // push element
    void pop();                     // pop element
    T const& top() const;           // return top element
    bool empty() const {            // return whether the stack is empty
        return elems.empty();
    }
};

template<typename T, template<typename> class Cont>
void Stack<T, Cont>::push(T const& elem)
{
    elems.push_back(elem);          // append copy of passed elem
}

#endif //TEMPLATES_STACK8DECL_HPP
