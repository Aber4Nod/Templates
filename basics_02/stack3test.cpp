//
// Created by n.mikhnenko on 05/01/2019.
//

#include "stack3.hpp"
#include <iostream>
#include <deque>

int main()
{
    // stack of ints:
    Stack<int> intStack;

    // stack of double using a std::deque<> to manage the elements
    Stack<double, std::deque<double>> dblStack;

    // manipulate int stack
    intStack.push(7);
    std::cout << intStack.top() << '\n';
    intStack.pop();

    // manipulate double stack
    dblStack.push(42.42);
    std::cout << dblStack.top() << '\n';
    dblStack.pop();
}
