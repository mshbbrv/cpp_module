#include "HumanB.hpp"

HumanB::HumanB( std::string	name ) : _name(name), _weapon(nullptr) {}

HumanB::~HumanB( void ) {}

void HumanB::attack( void ) {
	std::cout << _name << " attacks with his " << _weapon->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon( Weapon &weapon ) { _weapon = &weapon; }