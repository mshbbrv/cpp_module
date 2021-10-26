#include "span.hpp"

int main( void )
{
    std::cout << "--------------EMPTY TEST--------------" << '\n';
    {
        Span sp;

        try {

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch ( std::exception & e ) {

            std::cout << e.what() << '\n';
        }
    }

    std::cout << "--------------FULL TEST--------------" << '\n';
    {
        Span sp = Span(5);

        try {
            sp.addNumber(100);
            sp.addNumber(1);
            sp.addNumber(10);
            sp.addNumber(5);
            sp.addNumber(20);
            sp.addNumber(20);

        }
        catch ( std::exception & e ) {

            std::cout << e.what() << '\n';
        }
    }

    std::cout << "--------------SIMPLE TEST--------------" << '\n';
    {
        Span sp = Span(5);

        try {
            sp.addNumber(100);
            sp.addNumber(1);
            sp.addNumber(-10);
            sp.addNumber(5);
            sp.addNumber(20);

        }
        catch ( std::exception & e ) {

            std::cout << e.what() << '\n';
        }
        try {

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch ( std::exception & e ) {

            std::cout << e.what() << '\n';
        }
    }

    std::cout << "--------------LARGE TEST--------------" << '\n';
    {
        Span                sp = Span( 50000 );
        std::vector<int>    nums(49995, 1);

        try {
            sp.addNumber(100);
            sp.addNumber(1);
            sp.addNumber(-10);
            sp.addNumber(5);
            sp.addNumber(20);
            sp.addNumber( nums.begin(), nums.end() );

        }
        catch ( std::exception & e ) {

            std::cout << e.what() << '\n';
        }
        try {

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch ( std::exception & e ) {

            std::cout << e.what() << '\n';
        }
    }
    return 0;
}