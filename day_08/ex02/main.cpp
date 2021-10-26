#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main( void )
{
    std::cout << "----------COMPARISON OF OPERATIONS----------" << '\n';
    {
        MutantStack<int> mstack;
        std::stack< int, std::list<int> > lstack;

        if ( mstack.empty() )
            std::cout << "mstack is empty" << '\n';
        else
            std::cout << "mstack is not empty" << '\n';

        if ( lstack.empty() )
            std::cout << "lstack is empty" << '\n';
        else
            std::cout << "lstack is not empty" << '\n';

        mstack.push(5);
        mstack.push(17);

        lstack.push(5);
        lstack.push(17);

        if ( mstack.empty() )
            std::cout << "mstack is empty" << '\n';
        else {
            std::cout << "mstack size is " << mstack.size() << std::endl;
            std::cout << "m element on top is " << mstack.top() << '\n';
        }

        if ( lstack.empty() )
            std::cout << "lstack is empty" << '\n';
        else {
            std::cout << "lstack size is " << mstack.size() << std::endl;
            std::cout << "l element on top is " << mstack.top() << '\n';
        }

        mstack.pop();
        lstack.pop();
        std::cout << "m element on top is " << mstack.top() << '\n';
        std::cout << "l element on top is " << lstack.top() << '\n';

        mstack.push(1);
        mstack.push(10);
        mstack.push(2);
        mstack.push(9);
        mstack.push(3);
        mstack.push(8);
        mstack.push(4);
        mstack.push(7);
        mstack.push(5);
        mstack.push(6);

        lstack.push(1);
        lstack.push(10);
        lstack.push(2);
        lstack.push(9);
        lstack.push(3);
        lstack.push(8);
        lstack.push(4);
        lstack.push(7);
        lstack.push(5);
        lstack.push(6);

        std::cout << "mStack:";
        while ( !mstack.empty() ) {
            std::cout << " " << mstack.top();
            mstack.pop();
        }
        std::cout << '\n';

        std::cout << "lStack:";
        while ( !lstack.empty() ) {
            std::cout << " " << lstack.top();
            lstack.pop();
        }
        std::cout << "\n\n";
        

    }
    std::cout << "----------ITERATORS TEST----------" << '\n';
    {
        std::cout << "m iterators test:";
        {
            MutantStack<int> mstack;
            for ( int i = 0; i < 100; i++ )
                mstack.push( (i + 1) * 10 );

            MutantStack<int>::iterator it = mstack.begin();
            MutantStack<int>::iterator ite = mstack.end();

            *it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }
        std::cout << "l iterators test:";
        {
            std::list<int> lstack;
            for ( int i = 0; i < 100; i++ )
                lstack.push_back( (i + 1) * 10 );

            std::list<int>::iterator it = lstack.begin();
            std::list<int>::iterator ite = lstack.end();

            *it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }
        
        std::cout << "m const iterators test:";
        {
            MutantStack<int> mstack;
            for ( int i = 0; i < 100; i++ )
                mstack.push( (i + 1) * 10 );

            MutantStack<int>::const_iterator it = mstack.cbegin();
            MutantStack<int>::const_iterator ite = mstack.cend();

            //*it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }
        std::cout << "l const iterators test:";
        {
            std::list<int> lstack;
            for ( int i = 0; i < 100; i++ )
                lstack.push_back( (i + 1) * 10 );

            std::list<int>::const_iterator it = lstack.cbegin();
            std::list<int>::const_iterator ite = lstack.cend();

            //*it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }

        std::cout << "m reverse iterators test:";
        {
            MutantStack<int> mstack;
            for ( int i = 0; i < 100; i++ )
                mstack.push( (i + 1) * 10 );

            MutantStack<int>::reverse_iterator it = mstack.rbegin();
            MutantStack<int>::reverse_iterator ite = mstack.rend();

            *it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }
        std::cout << "l reverse iterators test:";
        {
            std::list<int> lstack;
            for ( int i = 0; i < 100; i++ )
                lstack.push_back( (i + 1) * 10 );

            std::list<int>::reverse_iterator it = lstack.rbegin();
            std::list<int>::reverse_iterator ite = lstack.rend();

            *it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }
        std::cout << "m const reverse iterators test:";
        {
            MutantStack<int> mstack;
            for ( int i = 0; i < 100; i++ )
                mstack.push( (i + 1) * 10 );

            MutantStack<int>::const_reverse_iterator it = mstack.crbegin();
            MutantStack<int>::const_reverse_iterator ite = mstack.crend();

            //*it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }

        std::cout << "l const reverse iterators test:";
        {
            std::list<int> lstack;
            for ( int i = 0; i < 100; i++ )
                lstack.push_back( (i + 1) * 10 );

            std::list<int>::const_reverse_iterator it = lstack.crbegin();
            std::list<int>::const_reverse_iterator ite = lstack.crend();

            //*it = 777;
            while ( it != ite ) {
                std::cout << " " << *it;
                ++it;
            }
            std::cout << '\n';
        }
        std::cout << '\n';

    }
    std::cout << "----------COPY TEST----------" << '\n';
    {

        MutantStack<int> mstack;
        for ( int i = 0; i < 10; i++ )
            mstack.push( (i + 1) * 7 );

        std::stack<int> stack( mstack );

        std::cout << "mStack:";
        while ( !mstack.empty() ) {
            std::cout << " " << mstack.top();
            mstack.pop();
        }
        std::cout << '\n';

        std::cout << "stack:";
        while ( !stack.empty() ) {
            std::cout << " " << stack.top();
            stack.pop();
        }
        std::cout << '\n';

    }

    return 0;
}