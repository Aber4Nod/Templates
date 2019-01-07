//
// Created by n.mikhnenko on 07/01/2019.
//

#ifndef TEMPLATES_VARPRINT3_HPP
#define TEMPLATES_VARPRINT3_HPP

#include <iostream>

template<typename T, typename... Types>
void print(T firstArg, Types... args)
{
    std::cout << firstArg << '\n';
    if (sizeof...(args) > 0) {          // error if sizeof...(args) == 0
        print(args...);                 // and no print() for no arguments declared during instantiation
    }
}

#endif //TEMPLATES_VARPRINT3_HPP
