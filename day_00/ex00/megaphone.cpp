#include <iostream>

void printUpperCase(const char *string)
{
	const char *str;

	if (string)
	{
		str = string;
		while (*str)
		{
			std::cout << static_cast<char>(toupper(*str));
			str++;
		}
	}
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
			printUpperCase(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
