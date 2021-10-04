#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {

    int             animalCount( 10 );
    Animal          *animals[animalCount];
    //Animal          test;

    std::cout << "------------Create Animals-------------" << "\n";
    for ( int i = 0; i < animalCount; i++ ) {

        std::cout << "Create Animal #" << i + 1 << ":\n";
        if ( i < animalCount / 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        std::cout << "\n";
    }

    std::cout << "\n------------Delete Animals-------------" << "\n";

    for ( int i = 0; i < animalCount; i++ ) {

        std::cout << "Delete Animal #" << i + 1 << ":\n";
        delete animals[i];
        std::cout << "\n";
    }

    std::cout << "\n------------Deep Copy Test-------------" << "\n";

    int ideaNum = 0;
    Cat firstCat;
    std::cout << "\nfirstCat idea #" << ideaNum << " "
    << firstCat.getIdea( ideaNum ) << "\n";
    firstCat.setIdea( "Buy food" );
    std::cout << "firstCat idea #" << ideaNum << " "
    << firstCat.getIdea( ideaNum ) << "\n\n";
    {
        Cat secondCat = firstCat;
        std::cout << "\nsecondCat idea #" << ideaNum
        << " " << secondCat.getIdea( ideaNum ) << "\n";
        secondCat.setIdea( "Buy more food" );
        ideaNum++;
        std::cout << "secondCat idea #" << ideaNum
        << " " << secondCat.getIdea( ideaNum ) << "\n\n";
    }
    std::cout << "\nfirstCat idea #" << ideaNum << " " <<
    firstCat.getIdea( ideaNum ) << "\n\n";

    ideaNum = 0;
    Dog firstDog;
    std::cout << "\nfirstDog idea #" << ideaNum << " "
    << firstDog.getIdea( ideaNum ) << "\n";
    firstDog.setIdea( "Buy bones" );
    std::cout << "firstDog idea #" << ideaNum << " "
    << firstDog.getIdea( ideaNum ) << "\n\n";
    {
        Dog secondDog( firstDog );
        std::cout << "\nsecondDog idea #" << ideaNum
        << " " << secondDog.getIdea( ideaNum ) << "\n";
        secondDog.setIdea( "Buy more bones" );
        ideaNum++;
        std::cout << "secondDog idea #" << ideaNum
        << " " << secondDog.getIdea( ideaNum ) << "\n\n";
    }
    std::cout << "\nfirstDog idea #" << ideaNum << " " <<
    firstDog.getIdea( ideaNum ) << "\n\n";
}