#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main( void ) {

    std::vector<int> v;

    for ( int i = 0; i < 5; i++ ) {
        v.push_back( i + 1 );
    }

    int pos = easyfind(v, 3);
    std::cout << "found 3 at pose " << pos << '\n';

    return 0;
}