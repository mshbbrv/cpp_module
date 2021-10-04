#include "Brain.hpp"

Brain::Brain( void ) {

    std::cout << "Brain constructor called" << "\n";

    _ideas = new ( std::nothrow ) std::string[_ideasCount];
    if ( !_ideas )
        std::cout << "Can't allocate memory" << "\n";

    for ( int i = 0; i < _ideasCount; i++ ) {
        _ideas[i] = "No idea";
    }
}

Brain::~Brain( void ) {

    std::cout << "Brain destructor called" << "\n";

    delete[] _ideas;
}

Brain &Brain::operator=( const Brain &brain ) {

    if ( this != &brain ) {

        delete[] _ideas;

        if ( brain._ideas ){

            _ideas = new ( std::nothrow ) std::string[brain._ideasCount];
            if ( !_ideas )
                std::cout << "Can't allocate memory" << "\n";

            for ( int i = 0; i < brain._ideasCount; i++ )
                _ideas[i] = brain._ideas[i];
        }
        else
            _ideas = 0;
    }

    return *this;
}

Brain::Brain( const Brain &brain ) {

    if ( brain._ideas ){

        _ideas = new ( std::nothrow ) std::string[brain._ideasCount];
        if ( !_ideas )
            std::cout << "Can't allocate memory" << "\n";

        for ( int i = 0; i < brain._ideasCount; i++ )
            _ideas[i] = brain._ideas[i];
    }
    else
        _ideas = 0;
}

int Brain::getIdeaCount( void ) const {

    return _ideasCount;
}

std::string Brain::getIdea( const int index ) {

    if ( index >= 0 && index < _ideasCount )
        return _ideas[index];
    else
        return "out of range";
}

void Brain::setIdea( std::string idea ) {

    for ( int i = 0; i < _ideasCount; i++ ) {
        if ( _ideas[i] == "No idea" ) {
            _ideas[i] = idea;
            break;
        }
    }
}