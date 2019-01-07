//
// Created by n.mikhnenko on 07/01/2019.
//

#ifndef TEMPLATES_VARPRINT2_HPP
#define TEMPLATES_VARPRINT2_HPP

#include <iostream>

template<typename T>
void print(T arg)
{
    std::cout << arg << '\n';           // print passed arguments
}

template<typename T, typename... Types>
void print(T firstArg, Types... args)
{
    print(firstArg);                    // call print() for the first argument
    print(args...);                     // call print() for remaining arguments
}

#endif //TEMPLATES_VARPRINT2_HPP
