#include "contact.hpp"

contact::contact( void ){
	
}

contact::~contact( void ){
	
}

void	reset(char s[11])
{
	int i;

	i = 0;
	while (i < 11)
		s[i++] = 0;
}

void	shorting(const char *str)
{
	int	i;

	std::string s1 = str;
	std::string s2 = s1.substr(0, 10);
	if (s1.length() > s2.length())
		s2[9] = '.';
	i = 0;
	while (s2.length() + i++ < 10)
		std::cout << " ";
	std::cout << s2;
}

void	contact::init(void){
	this->first_name[0] = 0;
	this->last_name[0] = 0;
	this->nickname[0] = 0;
	this->phone_number[0] = 0;
	this->darkest_secret[0] = 0;
}

void	contact::display(int i) const {
	char	index[11];
	int		j;

	std::string s;
	j = 0;
	while (j < 10)
		index[j++] = ' ';
	index[9] = '0' + i;
	index[10] = 0;
	if (this->first_name[0] != 0)
	{
		std::cout << index << "|" ;
		shorting(this->first_name);
		std::cout << "|";
		shorting(this->last_name);
		std::cout << "|";
		shorting(this->nickname);
		std::cout << std::endl;
	}		
}
