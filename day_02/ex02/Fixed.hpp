#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{

private:

	int					_rawBits;
	static const int	_fractionalBits = 8;

public:

	Fixed( void );
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed &fixed );
	~Fixed();

	Fixed& operator= ( const Fixed &fixed);

	bool operator> ( const Fixed &fixed ) const;
	bool operator< ( const Fixed &fixed ) const;
	bool operator>= ( const Fixed &fixed ) const;
	bool operator<= ( const Fixed &fixed ) const;
	bool operator== ( const Fixed &fixed ) const;
	bool operator!= ( const Fixed &fixed ) const;

	Fixed operator+ ( const Fixed &fixed ) const;
	Fixed operator- ( const Fixed &fixed ) const;
	Fixed operator* ( const Fixed &fixed ) const;
	Fixed operator/	( const Fixed &fixed ) const;

	Fixed& operator++ ( void );
	Fixed& operator-- ( void );

	Fixed operator++ ( int );
	Fixed operator-- ( int );

	const static Fixed& min( const Fixed &fixed1, const Fixed &fixed2 );
	const static Fixed& max( const Fixed &fixed1, const Fixed &fixed2 );
	static Fixed& max( Fixed &fixed1, Fixed &fixed2 );
	static Fixed& min( Fixed &fixed1, Fixed &fixed2 );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream& operator<< ( std::ostream &out, const Fixed &fixed );

#endif //FIXED_HPP
