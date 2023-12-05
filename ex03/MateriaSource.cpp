/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:55:12 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:55:14 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	std::cout << GREEN << "MateriaSource has been created\n" << RESET;
}

MateriaSource::~MateriaSource()
{
	std::cout << GREEN << "MateriaSource has been destroyed\n" << RESET;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for(int i =0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	std::cout << GREEN << "MateriaSource has been copied\n" << RESET;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for(int i =0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	std::cout << GREEN << "MateriaSource has been copied\n" << RESET;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;
	while (i < 4 && this->_inventory[i] != 0)
		i++;
	if (i == 4)
	{
		std::cout << "Can't learn any more Materia";
		return ;
	}
	this->_inventory[i] = m;
	std::cout << m->getType() << " has been learned\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->_inventory[i] != 0; i++)
	{
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return NULL;
}