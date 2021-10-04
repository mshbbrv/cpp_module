#pragma once
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal {

public:

    Cat( void );
    virtual ~Cat( void );

    Cat( const Cat &cat );
    Cat& operator= (  const Cat &cat );

    std::string         getIdea( const int index ) const;
    void                setIdea( std::string idea );

	virtual void        makeSound( void ) const;

private:

    Brain       *_brain;

};

#endif //CAT_HPP