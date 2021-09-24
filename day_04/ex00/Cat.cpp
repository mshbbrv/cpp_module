#include "Cat.hpp"

Cat::Cat( void ) : _type( "Cat" ){

    std::cout << "Cat constructor called" << "\n";
}

Cat::~Cat( void ){

    std::cout << "Cat destructor called" << "\n";
}

Cat& Cat::operator=( const Cat &cat ){

    if ( this != &cat )
        _type = cat._type;

    return *this;
}

Cat::Cat( const Cat &cat ){

    *this = cat;
}

void Cat::setType( std::string type ) {

    _type = type;
}

std::string   Cat::getType( void ) const {

    return _type;
}

void Cat::makeSound( void ) const {

    std::cout << "Meow" << "\n";
}