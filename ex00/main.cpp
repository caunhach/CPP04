#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;

	std::cout << "\nWrongTest\n" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	std::cout << "\nmoreTest\n" << std::endl;

	const Animal* animal1 = new Animal("Cat");
	const Animal* animal2(animal1);
	const Animal* animal3 = new Dog();
	const Animal* animal4 = animal3;

	std::cout << animal1->getType() << " " << std::endl;
	std::cout << animal2->getType() << " " << std::endl;
	std::cout << animal3->getType() << " " << std::endl;
	std::cout << animal4->getType() << " " << std::endl;

	animal1->makeSound();
	animal2->makeSound();
	animal3->makeSound();
	animal4->makeSound();

	delete animal1;
	delete animal3;

	return (0);
}