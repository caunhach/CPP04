/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:44:12 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:44:16 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(Cat const &src)
{
	this->_type = src.getType();
	this->_brain = new Brain(*src.getBrain());
	std::cout << "Copied Cat has been created" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*rhs.getBrain());
	std::cout << "Cat assignment operator has been called" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
