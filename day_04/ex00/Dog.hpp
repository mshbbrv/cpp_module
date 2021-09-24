#pragma once
#ifndef DOG_HPP
#define DOG_HPP
# include "Animal.hpp"

class Dog: virtual public Animal {

public:

	Dog( void );
	~Dog( void );

	Dog( const Dog &dog );
	Dog& operator= (  const Dog &dog );

    virtual void        setType( std::string type );
    virtual std::string getType( void ) const;
    virtual void        makeSound( void ) const;

private:

	std::string _type;

};

#endif //DOG_HPP