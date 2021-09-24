#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Untyped" ){

    std::cout << "WrongAnimal constructor called" << "\n";
}

WrongAnimal::~WrongAnimal( void ){

    std::cout << "WrongAnimal destructor called" << "\n";
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &wrongAnimal ){

    if ( this != &wrongAnimal )
        _type = wrongAnimal._type;
    return *this;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wrongAnimal ){

    *this = wrongAnimal;
}

void WrongAnimal::setType( std::string type ) {

    _type = type;
}

std::string   WrongAnimal::getType( void ) const {

    return _type;
}

void WrongAnimal::makeSound( void ) const{

    std::cout << "No sound for untyped WrongAnimal" << "\n";
}