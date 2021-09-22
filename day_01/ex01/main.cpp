#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main( void ){

	int		zombiesAmount = 10;
	Zombie *horde = zombieHorde(zombiesAmount, "GREG");

	if (!horde)
		std::cout << "Can't allocate memory" << std::endl;

	for (int index = 0; index < zombiesAmount; index++){
		horde[index].announce();
	}

	delete[] horde;

	return 0;
}