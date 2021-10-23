#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generator( void ) {

    Base *ptr;

    switch ( rand() % 3 + 1 ) {

        case 1:
            std::cout << "\tCreate instance of class \"A\"" << '\n';
            ptr = new A;
            break;
        case 2:
            std::cout << "\tCreate instance of class \"B\"" << '\n';
            ptr = new B;
            break;
        case 3:
            std::cout << "\tCreate instance of class \"C\"" << '\n';
            ptr = new C;
            break;
    }

    return ptr;
}


void    identify( Base *p ) {

    if ( dynamic_cast<A*>(p) )
        std::cout << "\tthis is instance of class \"A\"" << "\n";
    else if ( dynamic_cast<B*>(p) )
        std::cout << "\tthis is instance of class \"B\"" << "\n";
    else if ( dynamic_cast<C*>(p) )
        std::cout << "\tthis is instance of class \"C\"" << "\n";
    else
        std::cout << "\tthis is not an instance of class \"A\", \"B\" "
                     "or \"C\"" << "\n";
}


void    identify( Base &p ) {

    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "\tthis is instance of class \"A\"" << "\n";
    }
    catch ( const std::bad_cast& e ) {
        try {
            B b = dynamic_cast<B&>(p);
            std::cout << "\tthis is instance of class \"B\"" << "\n";
        }
        catch ( const std::bad_cast& e ) {
            try {
                C c = dynamic_cast<C&>(p);
                std::cout << "\tthis is instance of class \"C\"" << "\n";
            }
            catch ( const std::bad_cast& e ) {

                std::cout << "\tthis is not an instance of class \"A\", \"B\" "
                             "or \"C\"" << "\n";
            }
        }
    }
}

void    refRandIdentify( void ) {

    std::cout << "reference:\n";

    switch ( rand() % 3 + 1 ) {

        case 1:
        {
            A a;
            std::cout << "\tCreate instance of class \"A\"" << '\n';
            Base &r = a;
            identify( r );
            break;
        }
        case 2:
        {
            B b;
            std::cout << "\tCreate instance of class \"B\"" << '\n';
            Base &r = b;
            identify( r );
            break;
        }
        case 3:
        {
            C c;
            std::cout << "\tCreate instance of class \"C\"" << '\n';
            Base &r = c;
            identify( r );
            break;
        }
    }
}

int main( void ) {

    srand( time(NULL) );

    std::cout << "----------------TEST 1----------------" << '\n';
    {
        std::cout << "pointer:\n";
        Base *p = generator();
        identify( p );
        std::cout << '\n';

        refRandIdentify();

        std::cout << "parent:\n";
        Base *f = new Base;
        identify( f );
        delete p;
        delete f;
        std::cout << '\n';
    }
    std::cout << "----------------TEST 2----------------" << '\n';
    {
        std::cout << "pointer:\n";
        Base *p = generator();
        identify( p );
        std::cout << '\n';

        refRandIdentify();

        std::cout << "parent:\n";
        Base *f = new Base;
        identify( f );
        delete p;
        delete f;
        std::cout << '\n';
    }
    std::cout << "----------------TEST 3----------------" << '\n';
    {
        std::cout << "pointer:\n";
        Base *p = generator();
        identify( p );
        std::cout << '\n';

        refRandIdentify();

        std::cout << "parent:\n";
        Base *f = new Base;
        identify( f );
        delete p;
        delete f;
        std::cout << '\n';
    }

    return 0;
}