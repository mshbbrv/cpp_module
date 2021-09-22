#include "Weapon.hpp"

Weapon::Weapon( std::string type ) { setType(type); }

Weapon::~Weapon( void ) {}

const std::string& Weapon::getType( void ) const { return this->_type; }

void Weapon::setType( std::string type ) { _type = type; }