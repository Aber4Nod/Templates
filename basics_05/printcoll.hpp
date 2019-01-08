//
// Created by n.mikhnenko on 08/01/2019.
//

#ifndef TEMPLATES_PRINTCOLL_HPP
#define TEMPLATES_PRINTCOLL_HPP

#include <iostream>

// print elements of an STL container
template<typename T>
void printcoll(T const& coll)
{
    typename T::const_iterator pos;                 // iterator to iterate over coll
    typename T::const_iterator end(coll.end());     // end position
    for (pos=coll.begin(); pos != end; ++pos) {
        std::cout << *pos << ' ';
    }
    std::cout << '\n';
}

#endif //TEMPLATES_PRINTCOLL_HPP
