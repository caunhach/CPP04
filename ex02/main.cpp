/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:46:04 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:46:07 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	{
		const Animal* meta[10];

		for (int i = 0; i < 5; i++)
			meta[i] = new Dog();
		for (int i = 5; i < 10; i++)
			meta[i] = new Cat();
		for (int i = 0; i < 10; i++)
		{
			std::cout << meta[i]->getType() << std::endl;
			meta[i]->makeSound();
		}
		for (int i = 0; i < 10; i++)
			delete meta[i];
	}
	{
		Dog	dog;
		Cat	cat;

		Dog	dog1(dog);
		Cat	cat1(cat);
		Brain *dog_brain = dog.getBrain();
		Brain *cat_brain = cat.getBrain();
		Brain *dog1_brain = dog1.getBrain();
		Brain *cat1_brain = cat1.getBrain();
		std::cout << dog.getType() << std::endl;
		dog_brain->displayIdeas();
		std::cout << dog1.getType() << std::endl;
		dog1_brain->displayIdeas();
		std::cout << cat.getType() << std::endl;
		cat_brain->displayIdeas();
		std::cout << cat1.getType() << std::endl;
		cat1_brain->displayIdeas();
		dog_brain->setIdeas("bad idea");
		cat_brain->setIdeas("good idea");
		std::cout << dog.getType() << std::endl;
		dog_brain->displayIdeas();
		std::cout << dog1.getType() << std::endl;
		dog1_brain->displayIdeas();
		std::cout << cat.getType() << std::endl;
		cat_brain->displayIdeas();
		std::cout << cat1.getType() << std::endl;
		cat1_brain->displayIdeas();
	}
	// {
	// 	Animal *animal = new Animal();
	// 	animal->makeSound();
	// 	delete animal;
	// }
	return (0);
}
