#pragma once
#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {

public:

    Cure( void );
    virtual ~Cure( void );

    Cure( const Cure &cure );
    Cure& operator= (const Cure &cure );

    virtual AMateria* clone( void ) const;
    virtual void use( ICharacter& target );

};

#endif //Cure_HPP