#pragma once
#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
# include <string>
# include <iostream>

class Zombie {

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void ) const;
	void	setName( std::string name );

private:

	std::string _name;

};

#endif /* __ZOMBIE_HPP__ */