#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::get_contact(void)
{
	std::cout << "Please enter the First name : " << std::endl;
	getline(std::cin, _first_name);
	if (_first_name.empty())
	{
		std::cout << "Error. Empty input" << std::endl;
		return ;
	}
	std::cout << "Please enter the Second name : " << std::endl;
	getline(std::cin, _last_name);
	if (_last_name.empty())
	{
		std::cout << "Error. Empty input" << std::endl;
		return ;
	}
	std::cout << "Please enter the Nickname : " << std::endl;
	getline(std::cin, _nickname);
	if (_nickname.empty())
	{
		std::cout << "Error. Empty input" << std::endl;
		return ;
	}
	std::cout << "Please enter the Phone Number : " << std::endl;
	getline(std::cin, _phone_num);
	if (_phone_num.empty())
	{
		std::cout << "Error. Empty input" << std::endl;
		return ;
	}
	std::cout << "Please enter the Darkest Secret of the Contact : " << std::endl;
	getline(std::cin, _dark_secret);
	if (_dark_secret.empty())
	{
		std::cout << "Error. Empty input" << std::endl;
		return ;
	}
	return ;
}

bool	Contact::is_empty(void) const
{
	if (_first_name.empty() || _last_name.empty() || _nickname.empty() || _phone_num.empty() || _dark_secret.empty())
		return (true);
	return (false);
}

static void	print_str(const std::string &str)
{
	if (str.length() > MAX_LEN)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::string(MAX_LEN - str.length(), ' ') << str;
}

void	Contact::show_contact(void) const
{
	print_str(_first_name);
	std::cout << "|";
	print_str(_last_name);
	std::cout << "|";
	print_str(_nickname);
	std::cout << "|";
	print_str(_phone_num);
	std::cout << std::endl;
}

void	Contact::show_full_info(void) const
{
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone Number : " << _phone_num << std::endl;
	std::cout << "Darkest Secret : " << _dark_secret << std::endl;
}
