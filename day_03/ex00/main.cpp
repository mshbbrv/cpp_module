#include "ClapTrap.hpp"

int	main( void ){

	ClapTrap clapTrap( "Greg" );

	clapTrap.attack( "Matt" );
	clapTrap.takeDamage( 5 );
	clapTrap.beRepaired( 5 );

	return 0;
}