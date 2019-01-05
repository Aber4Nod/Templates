//
// Created by n.mikhnenko on 05/01/2019.
//

#include "stack1.hpp"
#include <iostream>
#include <string>

int main()
{
    Stack<int>         intStack;            // stack of ints
    Stack<std::string> stringStack;         // stack of strings

    // manipulate int stack
    intStack.push(7);
    std::cout << intStack.top() << '\n';

    // manipulate string stack
    stringStack.push("hello");
    std::cout << stringStack.top() << '\n';
    stringStack.pop();

    // Partial usage of class templates
    Stack<std::pair<int, int>> ps;          // note: std::pair<> has no operator<< defined
    ps.push({4, 5});                        // OK
    ps.push({6, 7});                        // OK
    std::cout << ps.top().first << '\n';    // OK
    std::cout << ps.top().second << '\n';   // OK
//    ps.printOn(std::cout);                  // ERROR: operator<< not supported for element type
}
