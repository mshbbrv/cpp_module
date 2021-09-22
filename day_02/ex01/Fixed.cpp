#include "Fixed.hpp"

Fixed::Fixed( void ){

	std::cout << "Default constructor called" << "\n";

	setRawBits( 0 );
}

Fixed::Fixed( const int value ){

	std::cout << "Int constructor called" << "\n";

	setRawBits( value << _fractionalBits );
}

Fixed::Fixed( const float value ){

	std::cout << "Float constructor called" << "\n";

	setRawBits( roundf( value * ( 1 << _fractionalBits ) ) );
}

Fixed::Fixed( const Fixed &fixed ){

	std::cout << "Copy constructor called" << "\n";

	*this = fixed;
}

Fixed &Fixed::operator= ( const Fixed &fixed ){

	std::cout << "Assignation constructor called" << "\n";

	if ( this != &fixed )
		_rawBits = fixed._rawBits;

	return *this;
}

std::ostream& operator<< ( std::ostream &out, const Fixed &fixed ){

	return out << fixed.toFloat();;
}

Fixed::~Fixed(){

	std::cout << "Destructor called" << "\n";
}

float Fixed::toFloat( void ) const{

	return static_cast<float> ( _rawBits ) / static_cast<float>( 1 <<
	_fractionalBits );
}

int Fixed::toInt( void ) const{

	return _rawBits >> _fractionalBits;
}

int Fixed::getRawBits() const{

	std::cout << "getRawBits member function called" << "\n";

	return _rawBits;
}

void  Fixed::setRawBits( int const raw ){

	_rawBits = raw;
};