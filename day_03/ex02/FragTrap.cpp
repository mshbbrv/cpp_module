#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name ){

	std::cout << "FragTrap constructor called" << "\n";

	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap( void ){

	std::cout << "FragTrap destructor called" << "\n";
}

void FragTrap::highFivesGuys( void ){

	std::cout << "High five!!!" << "\n";
}

void FragTrap::attack( const std::string &target ){

	std::cout << "FragTrap " << _name << " energy point is " << _energyPoints
	<< "\n";

	std::cout << "FragTrap " << _name << " attack " << target
	<< " causing " << _attackDamage << " points of damage!" << "\n";

	_energyPoints -= _attackDamage;

	std::cout << "Now FragTrap " << _name << " energy point is " <<
	_energyPoints << "\n\n";
}