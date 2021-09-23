#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{

public:

	ScavTrap( std::string name );
	~ScavTrap( void );

	void	guardGate( void );
	void	attack( std::string const& target );
};

#endif //SCAVTRAP_HPP