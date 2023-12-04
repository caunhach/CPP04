/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:53:03 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:53:04 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "Constructor of Cure called\n";
}

Cure::~Cure()
{
	std::cout << "Deconstructor of Cure called\n";
}

Cure::Cure(Cure const &src)
{
	*this = src;
	std::cout << "Copy constructor of Cure called\n";
}

Cure	&Cure::operator=(const Cure &rhs)
{
	_type = rhs.getType();
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
