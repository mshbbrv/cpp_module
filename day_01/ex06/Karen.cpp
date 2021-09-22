#include "Karen.hpp"

Karen::Karen( void ) {

	Karen::_funcPointers[0] = &Karen::_debug;
	Karen::_funcPointers[1] = &Karen::_info;
	Karen::_funcPointers[2] = &Karen::_warning;
	Karen::_funcPointers[3] = &Karen::_error;
	Karen::_funcPointers[4] = &Karen::_noSuchLevel;

	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	_levels[4] = "";
}

Karen::~Karen( void ) {}

void	Karen::complain( std::string level ){
	int index = 0;

	while (index < 4 && _levels[index] != level)
		index++;

	switch (index)
	{
		default:
			(this->*(_funcPointers[4]))();
			break;
		case 0:
			(this->*(_funcPointers[0]))();
		case 1:
			(this->*(_funcPointers[1]))();
		case 2:
			(this->*(_funcPointers[2]))();
		case 3:
			(this->*(_funcPointers[3]))();
	}
}

void	Karen::_noSuchLevel( void ){
	std::cout << "[ Probably complaining about insignificant problems ]" << "\n\n";
}

void	Karen::_debug( void ){
	std::cout << "[ DEBUG ]" << '\n';
	std::cout << "I love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger."
				 " I just love it!" << "\n\n";
}

void	Karen::_error( void ){
	std::cout << "[ ERROR ]" << '\n';
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << "\n\n";
}

void	Karen::_info( void ){
	std::cout << "[ INFO ]" << '\n';
	std::cout << "I cannot believe adding extra"
				 " bacon cost more money. You don’t put enough! If you did I "
				 "would not have to ask for it!" << "\n\n";
}

void	Karen::_warning( void ){
	std::cout << "[ WARNING ]" << '\n';
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
				 " coming here for years and you just started working here "
				 "last month." << "\n\n";
}