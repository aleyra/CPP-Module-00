#include "phonebook.hpp"

int	search_option(char s1[7]) {
	if (s1[0] == 'A' && s1[1] == 'D' && s1[2] == 'D' && s1[3] == 0)
		return (1);
	if (s1[0] == 'S' && s1[1] == 'E' && s1[2] == 'A' && s1[3] == 'R'
		&& s1[4] == 'C' && s1[5] == 'H' && s1[6] == 0)
		return (2);
	if (s1[0] == 'E' && s1[1] == 'X' && s1[2] == 'I' && s1[3] == 'T'
		&& s1[4] == 0)
		return (3);
	return (0);
}

int	main()
{
	char		buff[7];
	phonebook	pb;
	int			option;

	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> buff;
		option = search_option(buff);
		if (option == 3)
			return (0);
		if (option == 1)
			pb.add();
		else if (option == 2)
			pb.search();
		else
			std::cout << "Wrong command" << std::endl;
	}
}