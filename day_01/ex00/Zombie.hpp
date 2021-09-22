#pragma once
#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
# include <string>
# include <iostream>

class Zombie {

public:

	Zombie( std::string name );
	~Zombie( void );

	void	announce( void ) const;

private:

	std::string _name;

};

#endif /* __ZOMBIE_HPP__ */