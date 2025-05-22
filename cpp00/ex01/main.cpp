#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	std::string		command;

	while (true)
	{
		std::cout << "Please, enter the command : " << std::endl;
		getline(std::cin, command);

		if (command == "ADD")
			phone_book.add_contact();
		else if (command == "SEARCH")
			phone_book.search_contact();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Invalid command. Try again :)" << std::endl;
	}
	return (0);
}