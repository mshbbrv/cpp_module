#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <iterator>
#include <algorithm>
#include <vector>

class Span {

public:

    Span( void );
    Span( unsigned int n );
    ~Span( void );

    Span& operator=( const Span &o );
    Span( const Span &c );

    void    addNumber( int num );
    void    addNumber( std::vector<int>::iterator begin,
                       std::vector<int>::iterator end );
    long    shortestSpan( void );
    long    longestSpan( void );

private:

    std::vector<int>    _v;
    unsigned int        _maxSize;
};

#endif //SPAN_HPP
