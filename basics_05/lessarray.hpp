//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_LESSARRAY_HPP
#define TEMPLATES_LESSARRAY_HPP

template<typename T, int N, int M>
bool less (T(&a)[N], T(&b)[M])
{
    for (int i = 0; i < N && i < M; ++i)
    {
        if (a[i] < b[i]) return true;
        if (b[i] < a[i]) return false;
    }
    return N < M;
}

#endif //TEMPLATES_LESSARRAY_HPP
