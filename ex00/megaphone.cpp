#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			cout << (char)toupper(argv[i][j]);
	}
	cout << endl;
	return (0);
}