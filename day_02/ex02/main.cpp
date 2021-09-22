#include "Fixed.hpp"

int	main( void ) {

	Fixed a(13.5f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n" << "\n";

	std::cout << "-----Comparison operators----------" << "\n";
	std::cout << "a == b ? " << (a == b) << "\n";
	std::cout << "a != b ? "<< (a != b) << "\n";
	std::cout << "a <= b ? "<< (a <= b) << "\n";
	std::cout << "a < b ? "<< (a < b) << "\n";
	std::cout << "a >= b ? "<< (a >= b) << "\n";
	std::cout << "a > b ? "<< (a > b) << "\n" << "\n";

	std::cout << "-----Arithmetic operators----------" << "\n";
	std::cout << "a + b = " << (a + b) << "\n";
	std::cout << "a - b = "<< (a - b) << "\n";
	std::cout << "a * b =  "<< (a * b) << "\n";
	std::cout << "a / b = "<< (a / b) << "\n" << "\n";

	std::cout << "-----Increment operators----------" << "\n";
	std::cout << a << "\n";
	std::cout << ++a << "\n";
	std::cout << a << "\n";
	std::cout << a++ << "\n";
	std::cout << a << "\n" << "\n";

	std::cout << "-----Decrement operators----------" << "\n";
	std::cout << a << "\n";
	std::cout << --a << "\n";
	std::cout << a << "\n";
	std::cout << a-- << "\n";
	std::cout << a << "\n" << "\n";

	std::cout << "----------------MAX-------------" << "\n";
	std::cout << Fixed::max( a, b ) << "\n" << "\n";

	std::cout << "----------------MIN-------------" << "\n";
	std::cout << Fixed::min( a, b ) << "\n" << "\n";
	return 0;
}