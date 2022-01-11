#include <iostream>
#include "phonebook.hpp"

int	ft_strcmp(char *s1, char *s2) {
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] - s2[i] == 0)
		i++;
	return (s1[i] - s2[i]);
}

int	main()
{
	char	buff[7];
	phonebook	pb;

	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT" << std::endl;
		std::cin >> buff;
		if (ft_strcmp(buff, "EXIT") == 0)
			return (0);
		if (ft_strcmp(buff, "ADD") == 0)
			pb.add();
		else if (ft_strcmp(buff, "SEARCH") == 0)
			std::cout << "a faire";
		else
			std::cout << "Wrong command" << std::endl;
	}
}