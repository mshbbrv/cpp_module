#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
# include <iostream>

class Fixed{

private:

	int					_rawBits;
	static const int	_fractionalBits = 8;

public:

	Fixed( int value=0 );
	Fixed( const Fixed &fixed );
	Fixed& operator=(const Fixed &fixed);
	~Fixed();

	int	getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif //FIXED_HPP
