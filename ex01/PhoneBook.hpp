#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cctype>
# include "Contact.hpp"

# define MAX_NUM 8

class	PhoneBook
{
	Contact _contacts[MAX_NUM];
	int		_num_contacts;
	int		_index;

	public :
	PhoneBook();
	~PhoneBook();

	void	add_contact();
	void	search_contact() const;
};

# endif