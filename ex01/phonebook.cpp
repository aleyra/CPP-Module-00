#include "phonebook.hpp"

phonebook::phonebook( void ){
	this->init();
	std::cout << "Construtor called" << std::endl;
}

phonebook::~phonebook( void ){
	std::cout << "Destructor called" << std::endl;
}

void	phonebook::display_all( void ) const {
	int	i;

	std::cout << "     index" << "|" << "first name" << "|"
		<< " last name" << "|" << "  nickname" << std::endl;
	i = 0;
	while (i < 8)
	{
		c[i].display(i);
		i++;
	}
}

void	phonebook::init( void ){
	int	i;

	i = 0;
	while (i < 8)
	{
		c[i].init();
		i++;
	}
}

void	phonebook::add( void ){
	int	i;

	i = 0;
	while (i < 8 && c[i].first_name[0] != 0)
		i++;
	if (i == 8)
		i = 0;
	std::cout << "First Name, please (max 20 characters)" << std::endl;
	std::cin >> c[i].first_name;
	std::cout << "Last Name, please (max 20 characters)" << std::endl;
	std::cin >> c[i].last_name;
	std::cout << "Nickname, please (max 20 characters)" << std::endl;
	std::cin >> c[i].nickname;
	std::cout << "Phone Number, please (max 14 characters)" << std::endl;
	std::cin >> c[i].phone_number;
	std::cout << "Darkest secret, please (max 250 characters)" << std::endl;
	std::cin >> c[i].darkest_secret;
}

void	phonebook::search( void ) const {
	char	buff[2];
	int		i;
	
	this->display_all();
	std::cout << "Please enter the entry's index you want to display (1 character)"
		<< std::endl;
	std::cin >> buff;
	i = buff[0] - '0';
	std::cout << "First Name : " << c[i].first_name << std::endl;
	std::cout << "Last Name : " << c[i].last_name << std::endl;
	std::cout << "Nickname : " << c[i].nickname << std::endl;
	std::cout << "Phone Number : " << c[i].phone_number << std::endl;
	std::cout << "Darkest secret : " << c[i].darkest_secret << std::endl;
}
