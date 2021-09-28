#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {

    for (int i = 0; i < 4; i++){
        _copy[i] = 0;
    }
}

MateriaSource::~MateriaSource( void ) {

    for (int i = 0; i < 4; i++){
        delete _copy[i];
    }
}

MateriaSource::MateriaSource( const MateriaSource &materiaSource ) {

    for (int i = 0; i < 4; i++) {

        delete _copy[i];
        if ( materiaSource._copy[i] )
            _copy[i] = materiaSource._copy[i];
        else
            _copy[i] = 0;
    }
}

MateriaSource& MateriaSource::operator=( const MateriaSource &materiaSource ) {

    if ( this != &materiaSource )
    {
        for (int i = 0; i < 4; i++) {

            delete _copy[i];
            if ( materiaSource._copy[i] )
                _copy[i] = materiaSource._copy[i];
            else
                _copy[i] = 0;
        }
    }

    return *this;
}

void MateriaSource::learnMateria( AMateria * arg) {

    int i = 0;

    while ( _copy[i] )
        i++;

    _copy[i] = arg;
}

AMateria* MateriaSource::createMateria( const std::string &type ) {

    for (int i = 0; i < 4; i++){

        if ( _copy[i] && _copy[i]->getType() == type)
            return _copy[i]->clone();
    }

    return 0;
}