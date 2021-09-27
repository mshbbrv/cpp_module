#include "Cat.hpp"

Cat::Cat( void ) : _type( "Cat" ){

    std::cout << "Cat constructor called" << "\n";

    _brain = new Brain();
}

Cat::~Cat( void ){

    std::cout << "Cat destructor called" << "\n";

    delete _brain;
}

Cat& Cat::operator=( const Cat &cat ) {

    if ( this != &cat ) {

        delete _brain;
        _type = cat._type;
        if ( cat._brain ) {
            _brain = new Brain();

            for ( int i = 0; i < _brain->getIdeaCount(); i++ ) {
                setIdea( cat.getIdea( i ) );
            }
        }
        else
            _brain = 0;
    }

    return *this;
}

Cat::Cat( const Cat &cat ){

    _type = cat._type;

    if ( cat._brain ) {
        _brain = new Brain( *cat._brain );
    }
    else
        _brain = 0;
}


std::string Cat::getIdea( const int index ) const {

    if ( index < _brain->getIdeaCount() )
        return _brain->getIdea( index );
    else
        return "out of range";
}

void    Cat::setIdea( std::string idea ) {

    _brain->setIdea( idea );
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