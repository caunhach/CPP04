/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:44:41 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:44:44 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog has been created" << std::endl;
}

Dog::Dog(Dog const &src)
{
	this->_type = src.getType();
	this->_brain = new Brain(*src.getBrain());
	std::cout << "Copied Dog has been created" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*rhs.getBrain());
	std::cout << "Dog assignment operator has been called" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
