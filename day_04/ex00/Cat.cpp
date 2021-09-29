#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

    std::cout << "Cat constructor called" << "\n";
}

Cat::~Cat( void ){

    std::cout << "Cat destructor called" << "\n";
}

Cat& Cat::operator=( const Cat &cat ){

    if ( this != &cat )
        setType( cat.getType() );

    return *this;
}

Cat::Cat( const Cat &cat ){

    *this = cat;
}

void Cat::makeSound( void ) const {

    std::cout << "Meow" << "\n";
}