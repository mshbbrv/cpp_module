#include "iter.hpp"
#include <iostream>

template <typename T>
void print( T const &a ) {

    std::cout << a << '\n';
}

int main( void ) {

    std::string array[] = { "foo", "bar", "42" };
    iter( array, 3, print);

    return 0;
}