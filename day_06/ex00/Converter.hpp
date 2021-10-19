#pragma once
#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <numeric>

template <class T>
class Converter {

public:

    Converter( void );
    ~Converter( void );

    int     toInt( T literal );
    char    toChar( T literal );
    float   toFloat( T literal );
    double  toDouble( T literal );

private:

    Converter& operator= ( const Converter &o );
    Converter( const Converter &c );

};

#endif //CONVERTER_HPP
