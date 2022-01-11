#include "phonebook.hpp"
#include <string>

int	main()
{
	char		buff[7];
	phonebook	pb;

	std::string s1 ("ADD");
	std::string s2 ("SEARCH");
	std::string s3 ("EXIT");
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> buff;
		if (s3.compare(buff) == 0)
			return (0);
		if (s1.compare(buff) == 0)
			pb.add();
		else if (s2.compare(buff) == 0)
			pb.search();
		else
			std::cout << "Wrong command" << std::endl;
	}
}