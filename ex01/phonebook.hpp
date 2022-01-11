#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class phonebook {

public:

	contact	c[8];

	phonebook( void );
	~phonebook( void );

	void	display_all(contact c[8]) const;
	void	init(contact c[8]);
	void	add(contact c[8]);
};
#endif