#pragma once
#ifndef AMATERIAL_HPP
#define AMATERIA_HPP
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:

    std::string _type;

public:

    AMateria( void );
    AMateria( std::string const & type );
    virtual ~AMateria( void );

    AMateria( const AMateria &aMateria );
    AMateria& operator= ( const AMateria &aMateria );

    std::string const & getType( void ) const; //Returns the materia type

    virtual AMateria* clone( void ) const = 0;
    virtual void use(ICharacter& target);
};


#endif //AMATERIA_HPP