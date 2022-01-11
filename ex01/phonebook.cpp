#include "phonebook.hpp"
#include <iostream>

phonebook::display_all( void ){
	int	i;

	std::cout << "index     " << "|" << "first name" << "|"
		<< "last name " << "|" << "nickname  " << std::endl;
	i = 0;
	while (i < 8)
	{
		this[i].display(i);
		i++;
	}
}

phonebook::init( void ){
	int	i;

	i = 0;
	while (i < 8)
	{
		this[i].init();
		i++;
	}
}

phonebook::add( this ){
	int	i;

	i = 0;
	while (i < 8 && this[i].first_name[0] != 0)
		i++;
	if (i == 8)
		i = 0;
	std::cout << "First Name, please (max 20 characters)" << std::endl;
	std::cin >> this[i].first_name;
	std::cout << "Last Name, please (max 20 characters)" << std::endl;
	std::cin >> this[i].last_name;
	std::cout << "Nickname, please (max 20 characters)" << std::endl;
	std::cin >> this[i].nickname;
	std::cout << "Phone Number, please (max 14 characters)" << std::endl;
	std::cin >> this[i].phone_number;
	std::cout << "Darkest secret, please (max 250 characters)" << std::endl;
	std::cin >> this[i].darkest_secret;
}
