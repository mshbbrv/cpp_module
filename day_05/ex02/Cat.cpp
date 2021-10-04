#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

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
        setType( cat.getType() );

        if ( cat._brain ) {

            _brain = new Brain();
            for ( int i = 0; i < _brain->getIdeaCount(); i++ )
                _brain->setIdea( cat.getIdea(i) );
        }
        else
            _brain = 0;
    }

    return *this;
}

Cat::Cat( const Cat &cat ){

    setType( cat.getType() );

    if ( cat._brain ) {

        _brain = new Brain();
        for ( int i = 0; i < _brain->getIdeaCount(); i++ )
            _brain->setIdea( cat.getIdea(i) );
    }
    else
        _brain = 0;
}


std::string Cat::getIdea( const int index ) const {

    if ( index >= 0 && index < _brain->getIdeaCount() )
        return _brain->getIdea( index );
    else
        return "out of range";
}

void    Cat::setIdea( std::string idea ) {

    _brain->setIdea( idea );
}

void Cat::makeSound( void ) const {

    std::cout << "Meow" << "\n";
}