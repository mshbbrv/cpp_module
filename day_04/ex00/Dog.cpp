#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ){

    std::cout << "Dog constructor called" << "\n";
}

Dog::~Dog( void ){

    std::cout << "Dog destructor called" << "\n";
}

Dog& Dog::operator=( const Dog &dog ){

    if ( this != &dog )
        setType( dog.getType() );

    return *this;
}

Dog::Dog( const Dog &dog ){

    *this = dog;
}

void Dog::makeSound( void ) const{

    std::cout << "Woof" << "\n";
}