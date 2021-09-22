#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int	main( void ){

	Zombie *greg = newZombie("Greg");

	if (!greg)
		std::cout << "Can't allocate memory" << std::endl;
	randomChump("Kate");
	greg->announce();
	delete greg;
	return 0;
}