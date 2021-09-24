#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : _type( "WrongCat" ){

    std::cout << "WrongCat constructor called" << "\n";
}

WrongCat::~WrongCat( void ){

    std::cout << "WrongCat destructor called" << "\n";
}

WrongCat& WrongCat::operator=( const WrongCat &wrongCat ){

    if ( this != &wrongCat )
        _type = wrongCat._type;

    return *this;
}

WrongCat::WrongCat( const WrongCat &wrongCat ){

    *this = wrongCat;
}

void WrongCat::setType( std::string type ) {

    _type = type;
}

std::string   WrongCat::getType( void ) const {

    return _type;
}

void WrongCat::makeSound( void ) const {

    std::cout << "WrongCat Meow" << "\n";
}