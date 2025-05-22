#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _num_contacts(0), _index(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(void)
{
	Contact	temp;

	temp.get_contact();
	if (temp.is_empty())
	{
		std::cout << "Some fields are empty. The contact is not saved" << std::endl;
		return ;
	}
	_contacts[_index] = temp;
	if (_num_contacts < MAX_NUM)
		++_num_contacts;
	_index = (_index + 1) % MAX_NUM;
	std::cout << "Contact is added to your Phone Book!" << std::endl;
}

void	PhoneBook::search_contact(void) const
{
	std::string	input;
	int		index;

	for (int i = 0; i < _num_contacts; ++i)
	{
		std::cout << std::string(9, ' ') << i;
		_contacts[i].show_contact();
	}
	std::cout << "Enter the contact index to view full information" << std::endl;
	getline(std::cin, input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "The index is invalid" << std::endl;
		return ;
	}
	index = input[0] - '0';
	if (index < 0 || index >= _num_contacts)
	{
		std::cout << "The index is invalid" << std::endl;
		return ;
	}
	_contacts[index].show_full_info();
}
