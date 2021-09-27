#include "Dog.hpp"

Dog::Dog( void ) : _type( "Dog" ){

    std::cout << "Dog constructor called" << "\n";

    _brain = new Brain();
}

Dog::~Dog( void ){

    std::cout << "Dog destructor called" << "\n";

    delete _brain;
}

Dog& Dog::operator=( const Dog &dog ){

    if ( this != &dog ) {

        delete[] _brain;
        _type = dog._type;

        if ( dog._brain ) {

            _brain = new Brain();

            for ( int i = 0; i < _brain->getIdeaCount(); i++ ) {
                setIdea( dog.getIdea( i ) );
            }
        }
        else
            _brain = 0;
    }

    return *this;
}

Dog::Dog( const Dog &dog ){

    _type = dog._type;

    if ( dog._brain ) {
        _brain = new Brain( *dog._brain );
    }
    else
        _brain = 0;
}

std::string Dog::getIdea( const int index ) const {

    if ( index < _brain->getIdeaCount() )
        return _brain->getIdea( index );
    else
        return "out of range";
}

void    Dog::setIdea( std::string idea ) {

    _brain->setIdea( idea );
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