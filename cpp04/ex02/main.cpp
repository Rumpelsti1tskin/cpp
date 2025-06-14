#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	unsigned int	arr_size = 6;
	Animal	*animal_arr[arr_size];

	for (unsigned int i = 0; i < arr_size; ++i)
	{
		if (i % 2 == 0)
			animal_arr[i] = new Cat();
		else
			animal_arr[i] = new Dog();
	}

	for (unsigned int a = 0; a < arr_size; ++a)
	{
		std::cout << "I am a " << animal_arr[a]->getType() << " my order is " << a << std::endl;
	}

	for (unsigned int j = 0; j < arr_size; ++j)
	{
		delete animal_arr[j];
	}

	return 0;
}
