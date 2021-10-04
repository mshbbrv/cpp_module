#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

public:

	Brain( void );
	~Brain( void );

	Brain( const Brain &brain );
	Brain& operator=( const Brain &brain );

	int         getIdeaCount( void ) const;
	std::string getIdea( const int index );
	void        setIdea( std::string idea );

private:

	std::string         *_ideas;
	const static int    _ideasCount = 100;

};

#endif //BRAIN_HPP
