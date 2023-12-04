/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:43:45 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:43:48 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal has been created" << std::endl;
}

Animal::Animal(std::string const &type)
{
	this->_type = type;
	std::cout << "Animal : " << type << " has been created" << std::endl;
}

Animal::Animal(Animal const &src)
{
	this->_type = src.getType();
	std::cout << "Copied Animal has been created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "... ..." << std::endl;
}

std::string const &Animal::getType( void ) const
{
	return (this->_type);
}
