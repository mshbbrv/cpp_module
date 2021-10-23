#include "main.hpp"

uintptr_t serialize( Data* ptr) {

    return reinterpret_cast<std::uintptr_t>( ptr );
}

Data* deserialize( uintptr_t raw ) {

    return reinterpret_cast<Data*>( raw );
}

int main( void ) {

    Data *data = new Data;

    data->firstName = "Ben";
    data->lastName = "Simmons";
    data->age = 25;

    std::cout << "------------Serialization Data:------------" << "\n";
    std::cout << "First Name: " << data->firstName << "\n";
    std::cout << "Last Name: " << data->lastName << "\n";
    std::cout << "Age: " << data->age << "\n";

    uintptr_t raw = serialize( data );
    Data *newData = deserialize( raw );

    std::cout << "------------Deserialization Data:------------" << "\n";
    std::cout << "First Name: " << newData->firstName << "\n";
    std::cout << "Last Name: " << newData->lastName << "\n";
    std::cout << "Age: " << newData->age << "\n";

    delete newData;

    return 0;
}