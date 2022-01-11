#include "contact.hpp"
#include <iostream>

char	*shorting(const char *str)
{
	char	s[11];
	int		i;

	i = 0;
	while (str && str[i] && i <= 8)
	{
		s[i] = str[i];
		i++;
	}
	if (i <= 9 && str && str[i])
		s[i++] = '.';
	while (i <= 9)
	{
		s[i] = ' ';
		i++;
	}
	s[10] = 0;
	return (s);
}

contact::init(void){
	this->first_name[0] = 0;
	this->last_name[0] = 0;
	this->nickname[0] = 0;
	this->phone_number[0] = 0;
	this->darkest_secret[0] = 0;
}

contact::display(int i) const {
	char	index[11];
	int		j;

	index[0] = '0' + i;
	j = 1;
	while (j < 11)
		index[j++] = ' ';
	index[10] = 0;
	if (this.first_name[0] != 0)
		std::cout << index << "|" << shorting(this.first_name) << "|"
			<< shorting(this.last_name) << "|" << shorting(this.nickname) << std::endl;
}
