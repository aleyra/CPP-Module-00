#include <iostream>

void	ft_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i + 1 != ac)
		{
			ft_capitalize(av[i + 1]);
			std::cout << av[i + 1] ;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
