#include "Converter.hpp"

template <typename T>
Converter<T>::Converter( void ) {}

template <typename T>
Converter<T>::~Converter( void ) {}

template <typename T>
int Converter<T>::toInt( T literal ) {

    if ( static_cast<float>( literal ) > static_cast<float>(INT_MAX)
        || static_cast<float>( literal ) < static_cast<float>(INT_MIN)
        || std::isnan(literal)
        || std::isinf(literal))
        throw std::logic_error( "impossible" );
    else
        return static_cast<int>( literal );
}

template <typename T>
char Converter<T>::toChar( T literal ) {

    if ( !isprint( static_cast<int>( literal ) ) )
        throw std::logic_error( "Non displayable" );

    return static_cast<char>( literal );
}

template <typename T>
float Converter<T>::toFloat( T literal ) {

    return static_cast<float>( literal );
}

template <typename T>
double Converter<T>::toDouble( T literal ) {

    return static_cast<double>( literal );
}

template <typename T>
Converter<T> &Converter<T>::operator=( const Converter<T> &o ) {

    (void)o;
    return *this;
}

template <typename T>
Converter<T>::Converter( const Converter<T> &c ) { (void)c; }