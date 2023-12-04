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
	std::cout << "Dog has been created" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copied Dog has been created" << std::endl;
	this->_type = src.getType();
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
