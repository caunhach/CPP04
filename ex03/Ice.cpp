/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:54:18 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:54:20 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "cure";
	std::cout << "Constructor of Ice called\n";
}

Ice::~Ice()
{
	std::cout << "Deconstructor of Ice called\n";
}

Ice::Ice(Ice const &src)
{
	*this = src;
	std::cout << "Copy constructor of Ice called\n";
}

Ice		&Ice::operator=(const Ice &rhs)
{
	_type = rhs.getType();
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
