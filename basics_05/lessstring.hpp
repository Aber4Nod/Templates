//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_LESSSTRING_HPP
#define TEMPLATES_LESSSTRING_HPP

template<int N, int M>
bool less(char const(&a)[N], char const(&b)[M])
{
    for (int i = 0; i < N && i < M; ++i)
    {
        if (a[i] < b[i]) return true;
        if (b[i] < a[i]) return false;
    }
    return N < M;
}

#endif //TEMPLATES_LESSSTRING_HPP
