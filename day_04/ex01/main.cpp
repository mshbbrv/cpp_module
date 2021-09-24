#include "ScavTrap.hpp"

int	main( void ){

	ScavTrap scavTrap( "Greg" );

	scavTrap.guardGate();
	scavTrap.attack( "Matt" );
	scavTrap.takeDamage( 10 );
	scavTrap.beRepaired( 10 );

	return 0;
}