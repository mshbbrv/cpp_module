#include "easyfind.hpp"

int main( void ) {

    std::vector<int>            v;
    std::vector<int>::iterator  it;
    int                         elem = 5;

    for ( int i = 0; i < 10; i++ ) {
        v.push_back( i + 1 );
    }

    try {

        it = easyfind(v, elem);
        std::cout << elem << " is the " << *it << " element of the sequence" <<
        '\n';
    }
    catch ( std::exception &e ) {
        std::cout << e.what() << '\n';
    }

    elem = 100;
    try {

        it = easyfind(v, elem);
        std::cout << elem << " is the " << *it << " element of the sequence" <<
        '\n';
    }
    catch ( std::exception &e ) {
        std::cout << e.what() << '\n';
    }

    return 0;
}