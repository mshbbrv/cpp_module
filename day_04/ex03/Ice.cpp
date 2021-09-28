#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::~Ice( void ) {}

Ice::Ice( const Ice &ice ) : AMateria( ice ) {}

Ice& Ice::operator=( const Ice &ice ) {

    if (this != &ice)
        AMateria::operator=(ice);

    return *this;
}

AMateria* Ice::clone( void ) const {

    return new Ice( *this );
}

void Ice::use( ICharacter &target ) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << '\n';
}