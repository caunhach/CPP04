/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:52:21 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:52:23 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_equip = false;
	// std::cout << GREEN << "AMateria has been created\n" << RESET;
}

AMateria::~AMateria()
{
	// std::cout << GREEN << "AMateria has been destroyed\n" << RESET;
}

AMateria::AMateria(AMateria const & ref)
{
	_type = ref.getType();
	// std::cout << GREEN << "AMateria has been copied\n" << RESET;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	_type = rhs.getType();
	// std::cout << GREEN << "AMateria's operator has been called\n" << RESET;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

bool const & AMateria::getEquip() const
{
	return (this->_equip);
}

void AMateria::setEquip(bool status)
{
	this->_equip = status;
}
