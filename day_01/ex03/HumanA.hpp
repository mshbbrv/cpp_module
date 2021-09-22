#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA{

public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA();

	void	attack( void );

private:

	std::string	_name;
	Weapon		&_weapon;


};

#endif /* __HUMANA_HPP__ */