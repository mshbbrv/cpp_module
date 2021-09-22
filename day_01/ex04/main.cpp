#include <string>
#include <iostream>
#include <fstream>

void	readReplaceAndWriteToFile( std::ifstream &inf,
								   std::ofstream &outf,
								   std::string &stringToReplace,
								   std::string &replacementString ){
	while (inf)
	{
		std::string	inputString;
		getline(inf, inputString);

		std::size_t find = inputString.find(stringToReplace);

		if ( find != std::string::npos)
		{
			inputString.erase(find, replacementString.length());
			inputString.insert(find, replacementString);
		}

		outf << inputString;
		if (!inputString.empty())
			outf << '\n';
	}
}

int	main( int ac, char *av[] )
{
	if ( ac == 4)
	{
		std::string	fileName(av[1]);
		std::string	stringToReplace(av[2]);
		std::string	replacementString(av[3]);

		if (stringToReplace.empty() || replacementString.empty())
		{
			std::cout << "Oops! String can't be empty" << '\n';
			exit(1);
		}

		std::ifstream inf(fileName, std::ios::in);

		if ( !inf )
		{
			std::cout << "Oops! Can't open file" << '\n';
			exit(1);
		}

		std::transform(fileName.begin(), fileName.end(),
					   fileName.begin(), ::toupper);
		std::ofstream outf(fileName.append(".replace"), std::ios::out);

		if ( !outf )
		{
			std::cout << "Oops! Something went wrong" << '\n';
			exit(1);
		}

		readReplaceAndWriteToFile(inf, outf,
								  stringToReplace,
								  replacementString);

		inf.close();
		outf.close();
	}
	else
		std::cout << "Oops! Wrong number of arguments" << '\n';
	return 0;
}