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
