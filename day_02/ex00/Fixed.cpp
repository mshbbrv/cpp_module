#include "Fixed.hpp"

Fixed::Fixed( int rawBits ){

	std::cout << "Default constructor called" << "\n";

	setRawBits( rawBits );
}

Fixed::Fixed( const Fixed &fixed ){

	std::cout << "Copy constructor called" << "\n";

	*this = fixed;
}

Fixed &Fixed::operator= ( const Fixed &fixed ){

	std::cout << "Assignation constructor called" << "\n";

	if ( this != &fixed )
		_rawBits = fixed.getRawBits();

	return *this;
}

Fixed::~Fixed(){

	std::cout << "Destructor called" << "\n";
}

int Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << "\n";

	return _rawBits;
}

void  Fixed::setRawBits( int const raw ){

	_rawBits = raw;
};