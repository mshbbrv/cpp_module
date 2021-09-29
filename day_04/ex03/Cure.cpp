#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::~Cure( void ) {}

Cure::Cure( const Cure &cure ) : AMateria( cure ) {}

Cure& Cure::operator=( const Cure &cure ) {

    if ( this != &cure )
        AMateria::operator=( cure );

    return *this;
}

AMateria* Cure::clone( void ) const {

    return new Cure( *this );
}

void Cure::use( ICharacter &target ) {

    std::cout << "* heals " << target.getName() << "’s wounds *" << '\n';
}