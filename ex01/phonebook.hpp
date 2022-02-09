#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include <string>

class phonebook {

public:

	contact	c[8];

	phonebook( void );
	~phonebook( void );

	void	display_all( void ) const;
	void	init( void );
	void	add( void );
	void	search( void ) const;

private:
	int	_last;
};
#endif