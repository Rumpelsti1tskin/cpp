#include "Contact.hpp"

using namespace std;

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::get_contact(void)
{
	cout << "Please enter the First name : " << endl;
	getline(cin, _first_name);
	if (_first_name.empty())
	{
		cout << "Error. Empty input" << endl;
		return ;
	}
	cout << "Please enter the Second name : " << endl;
	getline(cin, _last_name);
	if (_last_name.empty())
	{
		cout << "Error. Empty input" << endl;
		return ;
	}
	cout << "Please enter the Nickname : " << endl;
	getline(cin, _nickname);
	if (_nickname.empty())
	{
		cout << "Error. Empty input" << endl;
		return ;
	}
	cout << "Please enter the Phone Number : " << endl;
	getline(cin, _phone_num);
	if (_phone_num.empty())
	{
		cout << "Error. Empty input" << endl;
		return ;
	}
	cout << "Please enter the Darkest Secret of the Contact : " << endl;
	getline(cin, _dark_secret);
	if (_dark_secret.empty())
	{
		cout << "Error. Empty input" << endl;
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

static void	print_str(const string &str)
{
	if (str.length() > MAX_LEN)
		cout << str.substr(0, 9) << ".";
	else
		cout << string(MAX_LEN - str.length(), ' ') << str;
}

void	Contact::show_contact(void) const
{
	print_str(_first_name);
	cout << "|";
	print_str(_last_name);
	cout << "|";
	print_str(_nickname);
	cout << "|";
	print_str(_phone_num);
	cout << endl;
}

void	Contact::show_full_info(void) const
{
	cout << "First name : " << _first_name << endl;
	cout << "Last name : " << _last_name << endl;
	cout << "Nickname : " << _nickname << endl;
	cout << "Phone Number : " << _phone_num << endl;
	cout << "Darkest Secret : " << _dark_secret << endl;
}
