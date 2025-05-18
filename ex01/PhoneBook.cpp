#include "PhoneBook.hpp"

using namespace std;

PhoneBook::PhoneBook() : _num_contacts(0), _index(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(void)
{
	Contact	temp;

	temp.get_contact();
	if (temp.is_empty())
	{
		cout << "Some fields are empty. The contact is not saved" << endl;
		return ;
	}
	_contacts[_index] = temp;
	if (_num_contacts < MAX_NUM)
		++_num_contacts;
	_index = (_index + 1) % MAX_NUM;
	cout << "Contact is added to your Phone Book!" << endl;
}

void	PhoneBook::search_contact(void) const
{
	string	input;
	int		index;

	for (int i = 0; i < _num_contacts; ++i)
	{
		cout << string(9, ' ') << i;
		_contacts[i].show_contact();
	}
	cout << "Enter the contact index to view full information" << endl;
	getline(cin, input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		cout << "The index is invalid" << endl;
		return ;
	}
	index = input[0] - '0';
	if (index < 0 || index > _num_contacts)
	{
		cout << "The index is invalid" << endl;
		return ;		
	}
	_contacts[index].show_full_info();
}
