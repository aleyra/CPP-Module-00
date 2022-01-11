#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class contact {

public:

	char	first_name[21];
	char	last_name[21];
	char	nickname[21];
	char	phone_number[15];
	char	darkest_secret[251];

	contact( void );
	~contact( void );

	void	init(void);
	void	display(int i) const;
};
#endif