#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class phonebook {

public:

	contact	pb[8];

	phonebook( void );
	~phonebook( void );

	void	display_all(contact pb[8]) const;
	void	init(contact pb[8]);
};
#endif