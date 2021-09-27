#pragma once
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal {

public:

    Dog( void );
    virtual ~Dog( void );

    Dog( const Dog &dog );
    Dog& operator= ( const Dog &dog );

    std::string         getIdea( const int index ) const;
    void                setIdea( std::string idea );

    virtual void        setType( std::string type );
    virtual std::string getType( void ) const;
    virtual void        makeSound( void ) const;

private:

	std::string _type;
	Brain       *_brain;

};

#endif //DOG_HPP