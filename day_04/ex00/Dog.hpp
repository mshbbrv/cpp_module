#pragma once
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: virtual public Animal {

public:

	Dog( void );
	virtual ~Dog( void );

	Dog( const Dog &dog );
	Dog& operator=(  const Dog &dog );

    virtual void        makeSound( void ) const;

};

#endif //DOG_HPP