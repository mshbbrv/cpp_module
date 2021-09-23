#include "DiamondTrap.hpp"

int	main( void ){

	DiamondTrap diamondTrap( "Greg" );

	diamondTrap.attack( "Matt" );
	diamondTrap.takeDamage( 30 );
	diamondTrap.beRepaired( 30 );
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();

	return 0;
}