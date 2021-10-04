#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

private:

    std::string         _name;
    AMateria            *_inventory[4];

public:

    Character( void );
    Character( std::string name );
    virtual ~Character( void );

    Character( const Character &character );
    Character& operator= ( const Character &character );

    virtual std::string const & getName( void ) const;
    virtual void equip( AMateria* m );
    virtual void unequip( int idx );
    virtual void use( int idx, ICharacter& target );

};


#endif //CHARACTER_HPP