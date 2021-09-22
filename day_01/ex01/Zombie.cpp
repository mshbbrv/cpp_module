#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::~Zombie( void ) {
	std::cout << "no more " << _name << std::endl;
}

void Zombie::announce( void ) const{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) { _name = name; }