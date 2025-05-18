#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define	MAX_LEN 10
# define	INFO_NUM 5

class Contact
{
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_num;
	std::string	_dark_secret;

	public :
	Contact();
	~Contact();

	void	get_contact();
	bool	is_empty() const;
	void	show_contact() const;
	void	show_full_info() const;
};

#endif