#include "phonebook.hpp"

phonebook::phonebook( void ){
	this->init();
}

phonebook::~phonebook( void ){
	
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
	this->_last = 7;
}

void	phonebook::add( void ){
	this->_last++;
	if (this->_last == 8)
		this->_last = 0;
	std::cout << "First Name, please (max 20 characters)" << std::endl;
	while (std::cin.good() == 1 && std::cin.eof() != 1 && c[this->_last].first_name[0] == 0){
		std::cin >> c[this->_last].first_name;
	}
	std::cout << "Last Name, please (max 20 characters)" << std::endl;
	while (std::cin.good() == 1 && std::cin.eof() != 1 && c[this->_last].last_name[0] == 0){
		std::cin >> c[this->_last].last_name;
	}
	std::cout << "Nickname, please (max 20 characters)" << std::endl;
	while (std::cin.good() == 1 && std::cin.eof() != 1 && c[this->_last].nickname[0] == 0){
		std::cin >> c[this->_last].nickname;
	}
	std::cout << "Phone Number, please (max 14 characters)" << std::endl;
	while (std::cin.good() == 1 && std::cin.eof() != 1 && c[this->_last].phone_number[0] == 0){
		std::cin >> c[this->_last].phone_number;
	}
	std::cout << "Darkest secret, please (max 250 characters)" << std::endl;
	while (std::cin.good() == 1 && std::cin.eof() != 1 && c[this->_last].darkest_secret[0] == 0){
		std::cin >> c[this->_last].darkest_secret;
	}
}

void	phonebook::search( void ) const {
	char	buff[2];
	int		i;
	
	this->display_all();
	std::cout << "Please enter the entry's index you want to display (1 character)"
		<< std::endl;
	std::cin >> buff;
	i = buff[0] - '0';
	if (i < 0 || i > 7)
		i = 0;
	std::cout << "First Name : " << c[i].first_name << std::endl;
	std::cout << "Last Name : " << c[i].last_name << std::endl;
	std::cout << "Nickname : " << c[i].nickname << std::endl;
	std::cout << "Phone Number : " << c[i].phone_number << std::endl;
	std::cout << "Darkest secret : " << c[i].darkest_secret << std::endl;
}
