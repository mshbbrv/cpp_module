#pragma once
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: virtual public Animal {

public:

	Cat( void );
	virtual ~Cat( void );

	Cat( const Cat &cat );
	Cat& operator= (  const Cat &cat );

	virtual void        makeSound( void ) const;

};

#endif //CAT_HPP