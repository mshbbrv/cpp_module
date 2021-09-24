#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMOND_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap{

public:

	DiamondTrap( std::string name );
	~DiamondTrap( void );

	void	attack( std::string const& target );
	void	whoAmI( void );

private:

	std::string		_name;

};


#endif //DIAMOND_HPP