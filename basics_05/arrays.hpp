//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_ARRAYS_HPP
#define TEMPLATES_ARRAYS_HPP

#include <iostream>

template<typename T>
struct MyClass;                         // primary template

template<typename T, std::size_t SZ>
struct MyClass<T[SZ]>                   // partial specialization for arrays of known bounds
{
    static void print() { std::cout << "print() for T[" << SZ << "]\n"; }
};

template<typename T, std::size_t SZ>
struct MyClass<T(&)[SZ]>                // partial specialization for references to arrays of known bounds
{
    static void print() { std::cout << "print() for T(&)[" << SZ << "]\n"; }
};

template<typename T>
struct MyClass<T[]>                     // partial specialization for arrays of unknown bounds
{
    static void print() { std::cout << "print() for T[]\n"; }
};

template<typename T>
struct MyClass<T(&)[]>                  // partial specialization for references to arrays of unknown bounds
{
    static void print() { std::cout << "print() for T(&)[]\n"; }
};

template<typename T>
struct MyClass<T*>                      // partial specialization for pointers
{
    static void print() { std::cout << "print() for T*\n"; }
};

#endif //TEMPLATES_ARRAYS_HPP
