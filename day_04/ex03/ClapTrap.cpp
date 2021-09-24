#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitPoints( 10 ), _energyPoints( 10 ),
_attackDamage( 0 ){

	std::cout << "ClapTrap default constructor called" << "\n";
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ),
_energyPoints( 10 ), _attackDamage( 0 ){

	std::cout << "ClapTrap constructor called" << "\n";
}

ClapTrap::~ClapTrap( void ){

	std::cout << "ClapTrap destructor called" << "\n";
}

void ClapTrap::attack( const std::string &target ){

	std::cout << "ClapTrap " << _name << " energy point is " << _energyPoints
	<< "\n";

	std::cout << "ClapTrap " << _name << " attack " << target
	<< " causing " << _attackDamage << " points of damage!" << "\n";

	_energyPoints -= _attackDamage;

	std::cout << "Now ClapTrap " << _name << " energy point is " <<
	_energyPoints << "\n\n";
}

void ClapTrap::takeDamage( unsigned int amount ){

	std::cout << "ClapTrap " << _name << " hit points is " << _hitPoints
	<< "\n";

	std::cout << "ClapTrap " << _name << " take " << amount
	<< " points of damage!" << "\n";

	_hitPoints -= amount;

	std::cout << "Now ClapTrap " << _name << " hit points is " << _hitPoints
	<< "\n\n";
}

void ClapTrap::beRepaired( unsigned int amount ){

	std::cout << "ClapTrap " << _name << " hit points is " << _hitPoints
	<< "\n";

	std::cout << "ClapTrap " << _name << " be repaired with " << amount
	<< " points of damage!" << "\n";

	_hitPoints += amount;

	std::cout << "Now ClapTrap " << _name << " hit points is " << _hitPoints
	<< "\n\n";
}
