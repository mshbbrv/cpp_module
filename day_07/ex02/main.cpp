#include "Array.hpp"
#include <iostream>
#include "string"

int main( void ) {

    std::cout << "--------------INT TEST--------------" << '\n';

    {
        Array<int> intArray;

        std::cout << intArray.size() << '\n';
        try {

            std::cout << intArray[1] << '\n';
        }
        catch ( std::exception &e ) {

            std::cerr << e.what() << '\n';
        }
    }

    {
        Array<int> intArray( 10 );

        std::cout << intArray.size() << '\n';
        try {

            std::cout << intArray[1] << '\n';
        }
        catch ( std::exception &e ) {

            std::cerr << e.what() << '\n';
        }
    }


    std::cout << "--------------STRING TEST--------------" << '\n';

    {
        Array<std::string> stringArray;

        std::cout << stringArray.size() << '\n';
        try {

            std::cout << stringArray[1] << '\n';
        }
        catch ( std::exception &e ) {

            std::cerr << e.what() << '\n';
        }
    }

    {
        Array<std::string> stringArray(10);

        for ( int i = 0; i < 10; i++ )
            stringArray[i] = "42";

        std::cout << stringArray.size() << '\n';
        try {

            std::cout << stringArray[1] << '\n';
        }
        catch ( std::exception &e ) {

            std::cerr << e.what() << '\n';
        }

        Array<std::string> stringArray2( stringArray );
        Array<std::string> stringArray3 = stringArray;

        try {

            stringArray[1] = "new42";
            std::cout << stringArray2[1] << '\n';
            std::cout << stringArray3[1] << '\n';
            std::cout << stringArray[1] << '\n';

        }
        catch ( std::exception &e ) {

            std::cerr << e.what() << '\n';
        }
    }

    return 0;
}