#include "Dog.hpp"

Dog::Dog( void ) : _type( "Dog" ){

    std::cout << "Dog constructor called" << "\n";
}

Dog::~Dog( void ){

    std::cout << "Dog destructor called" << "\n";
}

Dog& Dog::operator=( const Dog &dog ){

    if ( this != &dog )
        _type = dog._type;

    return *this;
}

Dog::Dog( const Dog &dog ){

    *this = dog;
}

void Dog::setType( std::string type ) {

    _type = type;
}

std::string   Dog::getType( void ) const {

    return _type;
}

void Dog::makeSound( void ) const{

    std::cout << "Woof" << "\n";
}