#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <iterator>
#include <algorithm>
#include <vector>

template <typename T, template<class, class> class V>
typename V<T, std::allocator<T> >::iterator    easyfind(
        V<T, std::allocator<T> >& container, int elem ) {

    typename V<T, std::allocator<T> >::iterator it = std::find(
            container.begin(), container.end(), elem );
    if ( it != container.end() )
        return it;
    else
        throw std::out_of_range( "not found" );
}

#endif //EASYFIND_HPP
