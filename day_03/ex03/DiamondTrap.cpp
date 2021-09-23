#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): ScavTrap( name ), FragTrap(
		name ){

	std::cout << "DiamondTrap constructor called" << "\n";

	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap( void ){

	std::cout << "DiamondTrap destructor called" << "\n";
}

void DiamondTrap::attack( const std::string &target ){

	ScavTrap::attack( target );
}


void DiamondTrap::whoAmI( void ){

	std::cout << "DiamondTrap name is " << _name << "\n";
	std::cout << "ClapTrap name is " << ClapTrap::_name << "\n";
}