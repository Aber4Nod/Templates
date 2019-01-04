//
// Created by n.mikhnenko on 05/01/2019.
//

#include <iostream>

// maximum of two values of any type:
template <typename T>
T max (T a, T b)
{
    std::cout << "max<T>() \n";
    return b < a ? a : b;
}

// maximum of three values of any type:
template<typename T>
T max(T a, T b, T c)
{
    return max(max(a, b), c);           // uses the template version even for ints
                                        // because the following declaration comes too late
}

// maximum of two int values:
int max(int a, int b)
{
    std::cout << "max(int, int) \n";
    return b < a ? a : b;
}

int main()
{
    ::max(47, 11, 33);
}
