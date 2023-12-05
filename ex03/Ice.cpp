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

Ice::Ice() : AMateria("ice")
{
	std::cout << GREEN << "Ice has been created\n" << RESET;
}

Ice::~Ice()
{
	std::cout << GREEN << "Ice has been destroyed\n" << RESET;
}

Ice::Ice(Ice const &src)
{
	*this = src;
	std::cout << GREEN << "Ice has been copied\n" << RESET;
}

Ice		&Ice::operator=(const Ice &rhs)
{
	_type = rhs.getType();
	std::cout << GREEN << "Ice's operator has been called\n" << RESET;
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
