#include "span.hpp"

Span::Span( void ) : _maxSize(0) {}

Span::Span( unsigned int n ) : _maxSize( n ) {}

Span::~Span( void ) {}

Span &Span::operator=( const Span &o ) {

    if ( this != &o ) {

        _v = o._v;
    }
    return *this;
}

Span::Span( const Span &c ) : _v( c._v ) {}

void Span::addNumber( int num ) {

    if ( _v.size() == _maxSize )
        throw std::out_of_range( "out of space" );
    else
        _v.push_back( num );
}

void Span::addNumber( std::vector<int>::iterator begin,
                      std::vector<int>::iterator end ) {

    if ( ( end - begin ) + _v.size() > _maxSize )
        throw std::out_of_range( "out of space" );
    else
        std::copy( begin, end, std::back_inserter( _v ) );
}

long Span::shortestSpan( void ) {

    if ( _v.size() <= 1 )
        throw std::out_of_range( "one or fewer elements in the vector" );

    std::vector<int> sorted( _v );
    std::sort( sorted.begin(), sorted.end() );

    long span = LONG_MAX;
    for ( int i = 0; i < sorted.size() - 1; i++ ) {
        if ( static_cast<long>(sorted.at(i + 1))
            - static_cast<long>(sorted.at(i)) < span )
            span = static_cast<long>(sorted.at(i + 1))
                    - static_cast<long>(sorted.at(i));
    }
    return span;
}

long Span::longestSpan( void ) {

    if ( _v.size() <= 1 )
        throw std::out_of_range( "one or fewer elements in the vector" );

    long max = static_cast<long>( *std::max_element(_v.begin(), _v.end()) );
    long min = static_cast<long>( *std::min_element( _v.begin(), _v.end()) );

    return max - min;
}

