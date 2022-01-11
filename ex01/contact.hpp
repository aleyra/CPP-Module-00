#ifndef CONTACT_H
# define CONTACT_H

class contact {

public:

	char	first_name[20];
	char	last_name[20];
	char	nickname[20];
	char	phone_number[14];
	char	darkest_secret[50];

	contact( void );
	~contact( void );

	void	init(void);
	void	display(void) const;
};
#endif