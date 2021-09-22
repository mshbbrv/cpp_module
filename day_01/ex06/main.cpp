#include "Karen.hpp"

int	main( int ac, char *av[] )
{
	(void)ac;
	Karen karen;

	switch (ac)
	{
		default:
			std::cout << "Oops! Wrong number of arguments" << '\n';
			break;
		case 2:
			karen.complain(av[1]);
			break;
	}

	return 0;
}