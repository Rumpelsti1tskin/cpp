#include "Harl.hpp"

int	main(void)
{
	std::string	Harl_says;
	Harl		Harl;

	std::cout << "What does the fox... oops... Harl say?" << std::endl;
	std::cin >> Harl_says;

	Harl.complain(Harl_says);
	return (0);
}