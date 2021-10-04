#include "Character.hpp"

Character::Character( void ) : _name( "Unnamed" ) {

    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

Character::Character( std::string name ) : _name( name ) {

    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

Character::~Character( void ) {

    for (int i = 0; i < 4; i++)
        delete _inventory[i];
}

Character &Character::operator=( const Character &character ) {

    if ( this != &character ) {

        _name = character.getName();
        for (int i = 0; i < 4; i++) {

            delete _inventory[i];
            if ( character._inventory[i] )
                _inventory[i] = character._inventory[i];
            else
                _inventory[i] = 0;
        }
    }

    return *this;
}

Character::Character( const Character &character ) {

    _name = character.getName();

    for (int i = 0; i < 4; i++) {

        if ( character._inventory[i] )
            _inventory[i] = character._inventory[i];
        else
            _inventory[i] = nullptr;
    }
}

std::string const& Character::getName() const {

    return _name;
}

void Character::equip( AMateria* m ) {

    for ( int i = 0; i < 4; i++ ) {
        if ( _inventory[i] == nullptr ) {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip( int idx ) {

    if ( idx >= 0 && idx < 4 )
        _inventory[idx] = nullptr;
}

void Character::use( int idx, ICharacter &target ) {

    if ( idx >= 0 && idx < 4 )
        _inventory[idx]->use( target );
}