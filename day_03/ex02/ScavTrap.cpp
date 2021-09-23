#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap( name ){

	std::cout << "ScavTrap constructor called" << "\n";

	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap( void ){

	std::cout << "ScavTrap destructor called" << "\n";
}

void ScavTrap::guardGate( void ){

	std::cout << "ScavTrap have entered in Gate keeper mode" << "\n";
}

void ScavTrap::attack( const std::string &target ){

	std::cout << "ScavTrap " << _name << " energy point is " << _energyPoints
	<< "\n";

	std::cout << "ScavTrap " << _name << " attack " << target
	<< " causing " << _attackDamage << " points of damage!" << "\n";

	_energyPoints -= _attackDamage;

	std::cout << "Now ScavTrap " << _name << " energy point is " <<
	_energyPoints << "\n\n";
}
