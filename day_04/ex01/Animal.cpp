#include "Animal.hpp"

Animal::Animal( void ) : _type( "Untyped" ){

	std::cout << "Animal constructor called" << "\n";
}

Animal::Animal( std::string type): _type( type ) {

    std::cout << "Animal constructor called" << "\n";
}

Animal::~Animal( void ){

	std::cout << "Animal destructor called" << "\n";
}

Animal& Animal::operator=( const Animal &animal ) {

	if ( this != &animal ) {

	    _type = animal._type;
	}

	return *this;
}

Animal::Animal( const Animal &animal ){

    *this = animal;
}

void Animal::setType( std::string type ) {

    _type = type;
}

std::string   Animal::getType( void ) const {

    return _type;
}

void Animal::makeSound( void ) const{

    std::cout << "No sound for untyped animal" << "\n";
}