#include "Brain.hpp"

Brain::Brain( void ) {

    std::cout << "Brain constructor called" << "\n";

    _ideas = new ( std::nothrow ) std::string[_ideasCount];
    if ( !_ideas )
        std::cout << "Can't allocate memory" << "\n";

    for ( int i = 0; i < _ideasCount; i++ ) {
        _ideas[i] = "No idea";
    }

    _nextIdeaToUpdate = 0;
}

Brain::~Brain( void ) {

    std::cout << "Brain destructor called" << "\n";

    delete[] _ideas;
}

Brain &Brain::operator=( const Brain &brain ) {

    if ( this != &brain ){

        _nextIdeaToUpdate = brain._nextIdeaToUpdate;

        delete _ideas;

        if ( brain._ideas ){

            _ideas = new ( std::nothrow ) std::string[_ideasCount];
            if ( !_ideas )
                std::cout << "Can't allocate memory" << "\n";

            for ( int i = 0; i < _ideasCount; i++ ) {
                _ideas[i] = brain._ideas[i];
            }
        }
        else
            _ideas = 0;
    }

    return *this;
}

Brain::Brain( const Brain &brain ) {

    _nextIdeaToUpdate = brain._nextIdeaToUpdate;

    if ( brain._ideas ){

        _ideas = new ( std::nothrow ) std::string[_ideasCount];
        if ( !_ideas )
            std::cout << "Can't allocate memory" << "\n";

        for ( int i = 0; i < _ideasCount; i++ ) {
            _ideas[i] = brain._ideas[i];
        }
    }
    else
        _ideas = 0;
}

int Brain::getIdeaCount( void ) const {

    return _ideasCount;
}

std::string Brain::getIdea( const int index ) {

    if ( index < getIdeaCount() )
        return _ideas[index];
    else
        return "out of range";
}

void Brain::setIdea( std::string idea ) {

    if ( _nextIdeaToUpdate >= getIdeaCount() )
        _nextIdeaToUpdate = 0;
    _ideas[_nextIdeaToUpdate] = idea;
    _nextIdeaToUpdate++;
}