#include "FragTrap.hpp"

int	main( void ){

	FragTrap fragTrap( "Greg" );

	fragTrap.attack( "Matt" );
	fragTrap.takeDamage( 20 );
	fragTrap.beRepaired( 20 );
	fragTrap.highFivesGuys();

	return 0;
}