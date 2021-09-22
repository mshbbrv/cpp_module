#include "Fixed.hpp"

Fixed::Fixed( void ){

	setRawBits( 0 );
}

Fixed::Fixed( const int value ){

	setRawBits( value << _fractionalBits );
}

Fixed::Fixed( const float value ){

	setRawBits( roundf( value * ( 1 << _fractionalBits ) ) );
}

Fixed::Fixed( const Fixed &fixed ){

	*this = fixed;
}

Fixed::~Fixed(){

}

Fixed &Fixed::operator= ( const Fixed &fixed ){

	if ( this != &fixed )
		_rawBits = fixed._rawBits;

	return *this;
}

bool Fixed::operator> ( const Fixed &fixed ) const{

	return getRawBits() > fixed.getRawBits();
}

bool Fixed::operator< ( const Fixed &fixed ) const{

	return getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>= ( const Fixed &fixed ) const{

	return getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<= ( const Fixed &fixed ) const{

	return getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator== ( const Fixed &fixed ) const{

	return getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!= ( const Fixed &fixed ) const{

	return getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+ ( const Fixed &fixed ) const{

	Fixed tmp;

	tmp.setRawBits(getRawBits() + fixed.getRawBits());

	return tmp;
}

Fixed Fixed::operator- ( const Fixed &fixed ) const{

	Fixed tmp;

	tmp.setRawBits(getRawBits() - fixed.getRawBits());

	return tmp;
}

Fixed Fixed::operator* ( const Fixed &fixed ) const{

	Fixed tmp;

	tmp.setRawBits((getRawBits() * fixed.getRawBits()) >> _fractionalBits);

	return tmp;
}

Fixed Fixed::operator/ ( const Fixed &fixed ) const{

	Fixed tmp;

	tmp.setRawBits((getRawBits() << _fractionalBits) / fixed.getRawBits());

	return tmp;
}

Fixed& Fixed::operator++ ( void ){

	_rawBits++;

	return *this;
}

Fixed& Fixed::operator-- ( void ){

	_rawBits--;

	return *this;
}

Fixed Fixed::operator++ ( int ){

	Fixed tmp(*this);

	++(*this);

	return tmp;
}

Fixed Fixed::operator-- ( int ){

	Fixed tmp(*this);

	--(*this);

	return tmp;
}

Fixed &Fixed::min( Fixed &fixed1, Fixed &fixed2 ){

	if ( fixed1 < fixed2 )
		return fixed1;
	else
		return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2){

	if ( fixed1 < fixed2 )
		return fixed1;
	else
		return fixed2;
}

Fixed &Fixed::max( Fixed &fixed1, Fixed &fixed2 ){

	if ( fixed1 >= fixed2 )
		return fixed1;
	else
		return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2){

	if ( fixed1 >= fixed2 )
		return fixed1;
	else
		return fixed2;
}

std::ostream& operator<< ( std::ostream &out, const Fixed &fixed ){

	return out << fixed.toFloat();;
}

float Fixed::toFloat( void ) const{

	return static_cast<float> ( _rawBits ) / static_cast<float>( 1 <<
	_fractionalBits );
}

int Fixed::toInt( void ) const{

	return _rawBits >> _fractionalBits;
}

int Fixed::getRawBits() const{

	return _rawBits;
}

void  Fixed::setRawBits( int const raw ){

	_rawBits = raw;
};