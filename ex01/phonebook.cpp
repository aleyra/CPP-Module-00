#include "phonebook.hpp"
#include <iostream>

phonebook::display_all(contact pb[8]){
	int	i;

	std::cout << "index     " << "|" << "first name" << "|"
		<< "last name " << "|" << "nickname  " << std::endl;
	i = 0;
	while (i < 8)
	{
		contact::display(i, pb[i]);
		i++;
	}
}