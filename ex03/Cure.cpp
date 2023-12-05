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

Cure::Cure() : AMateria("cure")
{
	// std::cout << GREEN << "Cure has been created\n" << RESET;
}

Cure::~Cure()
{
	// std::cout << GREEN << "Cure has been destroyed\n" << RESET;
}

Cure::Cure(Cure const &src): AMateria("cure")
{
	*this = src;
	// std::cout << GREEN << "Cure has been copied\n" << RESET;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	_type = rhs.getType();
	// std::cout << GREEN << "Cure's operator has been called\n" << RESET;
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
