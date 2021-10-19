#include "templates.cpp"

template <typename T>
void    convert( const T &literal ) {

    Converter<T> converter;

    try {
        std::cout << "char: ";
        std::cout << "\'" << converter.toChar( literal ) << "\'" << '\n';
    }
    catch ( std::exception &e ) {
        std::cout << e.what() << '\n';
    }
    try {
        std::cout << "int: ";
        std::cout << converter.toInt( literal ) << '\n';
    }
    catch ( std::exception &e ) {
        std::cout << e.what() << '\n';
    }

    float fl = converter.toFloat( literal );
    std::cout << "float: " << fl;
    fl - round(fl) == 0 ?   std::cout << ".0f" << "\n" :
                            std::cout << "f" << "\n";

    float d = converter.toDouble( literal );
    std::cout << "double: " << d;
    d - round(d) == 0 ? std::cout << ".0" << "\n" : std::cout << "\n" ;
}

int typeDetect( std::string literal ) {

    if ( literal[0] == '\'' && std::isalpha( literal[1] )
        && literal[2] == '\'')
        convert( literal[1] );
    else {
        try {
            convert( std::stoi( literal ) );
        }
        catch ( std::exception &e ) {

            try {
                convert( std::stof( literal ) );
            }
            catch ( std::exception &e ) {

                try {
                    convert( std::stod( literal ) );
                }
                catch ( std::exception &e ) {
                    throw std::logic_error( "Not scalar type :(" );
                }
            }
        }
    }
    return 0;
}

int main( int ac, char *av[] ) {

    if ( ac == 2 ) {

        try {
            typeDetect( av[1] );
        }
        catch ( std::exception &e ) {
            std::cout << e.what() << "\n";
        }
    }
    else
        std::cerr << "Not valid number of arguments." << "\n";
    return 0;
}