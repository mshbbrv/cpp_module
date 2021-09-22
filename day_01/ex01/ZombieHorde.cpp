#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

	Zombie	*zombies = new (std::nothrow) Zombie[N];

	for (int index = 0; index < N; index++){
		zombies[index].setName( name + "#" + std::to_string(index) );
	}

	return zombies;
}