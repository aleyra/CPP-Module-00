#include "contact.hpp"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	shorting(const char *str, char s[11])
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	if (len < 10)
	while (len < 10)
	{
		len++;
		s[i] = ' ';
		i++;
	}
	while (str && str[i] && i <= 8)
	{
		s[i] = str[i];
		i++;
	}
	if (i <= 9 && str && str[i] && str[i + 1])
		s[i++] = '.';
	s[10] = 0;
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
	char	s[11];

	index[0] = '0' + i;
	j = 1;
	while (j < 11)
		index[j++] = ' ';
	index[10] = 0;
	if (this->first_name[0] != 0)
	{
		std::cout << index << "|" ;
		shorting(this->first_name, s);
		std::cout << s << "|";
		shorting(this->last_name, s);
		std::cout << s << "|";
		shorting(this->nickname, s);
		std::cout << s << std::endl;
	}		
}
