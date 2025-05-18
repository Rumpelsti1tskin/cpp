#include "Contact.hpp"
#include "PhoneBook.hpp"

using namespace std;

int	main(void)
{
	PhoneBook	phone_book;
	string		command;

	while (true)
	{
		cout << "Please, enter the command : " << endl;
		getline(cin, command);

		if (command == "ADD")
			phone_book.add_contact();
		else if (command == "SEARCH")
			phone_book.search_contact();
		else if (command == "EXIT")
			return (0);
		else
			cout << "Invalid command. Try again :)" << endl;
	}
	return (0);
}