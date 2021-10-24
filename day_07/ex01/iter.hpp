#pragma once
#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void    iter( T* array, std::size_t len, void (*fncPtr)( T const & ) ) {

    for ( std::size_t i = 0; i < len; i++ )
        fncPtr( array[i] );
}

#endif //ITER_HPP
