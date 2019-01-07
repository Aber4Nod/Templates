//
// Created by n.mikhnenko on 07/01/2019.
//

#ifndef TEMPLATES_VARPRINT1_HPP
#define TEMPLATES_VARPRINT1_HPP

#include <iostream>

void print() {}

template<typename T, typename... Types>
void print(T firstArg, Types... args)
{
    std::cout << firstArg << '\n';          // print first argument
    print(args...);                         // call print() for remaining arguments
}

#endif //TEMPLATES_VARPRINT1_HPP
