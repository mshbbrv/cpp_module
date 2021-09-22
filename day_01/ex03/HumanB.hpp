#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB{

public:

	HumanB( std::string	name );
	~HumanB( void );

	void	attack( void );
	void	setWeapon( Weapon &weapon );

private:

	std::string	_name;
	Weapon		*_weapon;


};

#endif /* __HUMANB_HPP__ */