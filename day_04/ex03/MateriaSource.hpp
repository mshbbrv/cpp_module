#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:

    AMateria    *_copy[4];

public:

    MateriaSource( void );
    virtual ~MateriaSource( void );

    MateriaSource( const MateriaSource &materiaSource );
    MateriaSource& operator=( const MateriaSource &materiaSource );

    virtual void learnMateria( AMateria* arg);
    virtual AMateria* createMateria( std::string const & type );
};
#endif //MATERIASOURCE_HPP