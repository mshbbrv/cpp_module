#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iterator>

template<class T>
class MutantStack : public std::stack<T> {

public:

    MutantStack( void );
    virtual ~MutantStack( void );

    MutantStack<T>& operator=( const MutantStack<T> &o );
    MutantStack( const MutantStack<T> & c );

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


    typename std::stack<T>::container_type::iterator                begin(void);
    typename std::stack<T>::container_type::iterator                end(void);

    typename std::stack<T>::container_type::const_iterator          cbegin(void)
                                                                    const;
    typename std::stack<T>::container_type::const_iterator          cend(void)
                                                                    const;

    typename std::stack<T>::container_type::reverse_iterator        rbegin(void);
    typename std::stack<T>::container_type::reverse_iterator        rend(void);

    typename std::stack<T>::container_type::const_reverse_iterator
                                                                    crbegin(void)
                                                                    const;
    typename std::stack<T>::container_type::const_reverse_iterator  crend(void)
                                                                    const;
};

template<typename T>
MutantStack<T>::MutantStack( void ) {}

template<typename T>
MutantStack<T>::~MutantStack( void ) {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=( const MutantStack<T> &o ) {

    if ( this != &o )
        std::stack<T>::operator=( o );

    return *this;
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &c ) : std::stack<T>( c ) {}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin( void ) {

    return std::stack<T>::c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end( void ) {

    return std::stack<T>::c.end();
}

template<typename T>
typename std::stack<T>::container_type::const_iterator
        MutantStack<T>::cbegin( void ) const {

    return std::stack<T>::c.cbegin();
}

template<typename T>
typename std::stack<T>::container_type::const_iterator
        MutantStack<T>::cend( void ) const {

    return std::stack<T>::c.cend();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator
        MutantStack<T>::rbegin( void ) {

    return std::stack<T>::c.rbegin();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator
        MutantStack<T>::rend( void ) {

    return std::stack<T>::c.rend();
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator
        MutantStack<T>::crbegin( void ) const {

    return std::stack<T>::c.crbegin();
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator
        MutantStack<T>::crend( void ) const {

    return std::stack<T>::c.crend();
}

#endif //MUTANTSTACK_HPP
