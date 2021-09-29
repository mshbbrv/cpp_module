#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {

    for (int i = 0; i < 4; i++)
        _templates[i] = nullptr;
}

MateriaSource::~MateriaSource( void ) {

    for (int i = 0; i < 4; i++)
        delete _templates[i];
}

MateriaSource::MateriaSource( const MateriaSource &materiaSource ) {

    for (int i = 0; i < 4; i++) {
        if ( materiaSource._templates[i] )
            _templates[i] = materiaSource._templates[i];
        else
            _templates[i] = nullptr;
    }
}

MateriaSource& MateriaSource::operator=( const MateriaSource &materiaSource ) {

    if ( this != &materiaSource )
    {
        for (int i = 0; i < 4; i++) {

            delete _templates[i];
            if ( materiaSource._templates[i] )
                _templates[i] = materiaSource._templates[i];
            else
                _templates[i] = nullptr;
        }
    }

    return *this;
}

void MateriaSource::learnMateria( AMateria *arg) {

    for ( int i = 0; i < 4; i++ ) {
        if ( _templates[i] == nullptr ) {
            _templates[i] = arg;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria( const std::string &type ) {

    for (int i = 0; i < 4; i++) {
        if ( _templates[i] && _templates[i]->getType() == type)
            return _templates[i]->clone();
    }

    return 0;
}