#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>

template <typename T>
T    easyfind( T a, int b ) {

    for ( int i = 0; i < a.size(); i++ ) {

        if ( a.at( i ) == b )
            return i;
    }
    throw std::out_of_range( "not found" );
}

#endif //EASYFIND_HPP
