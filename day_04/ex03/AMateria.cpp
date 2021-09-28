#include "AMateria.hpp"

AMateria::AMateria( void ) {}

AMateria::AMateria( const std::string &type ) : _type( type ) {}

AMateria::~AMateria( void ) {}

AMateria::AMateria( const AMateria &aMateria ) {

    *this = aMateria;
}

AMateria &AMateria::operator=( const AMateria &aMateria ) {

    if ( this != &aMateria)
        _type = aMateria._type;

    return *this;
}

std::string const& AMateria::getType( void ) const {

    return _type;
}

void AMateria::use( ICharacter& target ) { (void)target; }