/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:45:12 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:45:15 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal has been created" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	std::cout << "WrongAnimal : " << type << " has been created" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copied WrongAnimal has been created" << std::endl;
	this->_type = src.getType();
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "fake ... ..." << std::endl;
}

std::string const &WrongAnimal::getType( void ) const
{
	return (this->_type);
}
