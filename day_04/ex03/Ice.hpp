#pragma once
#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {

public:

    Ice( void );
    virtual ~Ice( void );

    Ice( const Ice &ice );
    Ice& operator= (const Ice &ice );

    virtual AMateria* clone( void ) const;
    virtual void use( ICharacter& target );

};

#endif //ICE_HPP