#pragma once
#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <stdexcept>

template <class T>
class Array {

public:

    Array( void );
    Array( unsigned int n );
    ~Array( void );

    Array& operator=( const Array& o );
    T& operator[]( const int i );
    Array( const Array& c );

    std::size_t size( void ) const;

private:

    T*          _elements;
    std::size_t _size;
};

template <typename T>
Array<T>::Array( void ) : _elements( new T[0] ), _size( 0 ) {}

template <typename T>
Array<T>::Array( unsigned int n ) : _elements( new T[n]() ), _size( n ) {}

template <typename T>
Array<T>::~Array( void ) {

    if ( _elements )
        delete[] _elements;
}

template <typename T>
Array<T> &Array<T>::operator=( const Array<T> &o ) {

    if ( this != &o ) {

        delete _elements;

        if ( o._elements ) {

            for ( std::size_t i = 0; i < o.size(); i++ ) {

                _elements[i] = o._elements[i];
            }
        }
        else
            _elements = 0;
    }

    return *this;
}

template <typename T>
T &Array<T>::operator[]( const int i ) {

    if ( i < 0 || i >= static_cast<int>( size() ) )
        throw std::out_of_range("out of range" );

    return _elements[i];
}

template <typename T>
Array<T>::Array( const Array<T> &copy )
: _elements( new T[copy.size()] ), _size( copy.size() ) {

    for ( int i = 0; i < static_cast<int>( copy.size() ); i++ ) {
        _elements[i] = copy._elements[i];
    }
}

template <typename T>
std::size_t Array<T>::size() const { return _size; }

#endif //ITER_HPP
