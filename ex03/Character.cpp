/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:52:43 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:52:45 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "Player";
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	std::cout << GREEN << "Character has been created\n" << RESET;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	std::cout << GREEN << "Character has been created\n" << RESET;
}

Character::~Character()
{
	std::cout << GREEN << "Character has been destroyed\n" << RESET;
}

Character::Character(Character const &src) : _name(src.getName() + ".copy")
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	std::cout << GREEN << "Character has been copied\n" << RESET;
}

Character	&Character::operator=(Character const &rhs)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone(); 
	}
	std::cout << GREEN << "Assignment operator of Character has been assigned\n" << RESET;
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (m->getEquip())
	{
		std::cout << "can not equip Materia that's already in inventory\n";
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << m->getType() << " has been equiped by " << this->getName() << std::endl;
			m->setEquip(true);
			return;
		}
	}
	std::cout << "can not equip Materia because inventory full\n";
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
	{
		_inventory[idx]->setEquip(false);
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
	{
		std::cout << "Nothing found to use at index :" << idx << std::endl;
		return ;
	}
	else
		_inventory[idx]->use(target);
}

void	Character::showinventory(void)
{
	std::cout << "<" << this->getName() << ">\n" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != 0)
			std::cout << "slot " << i + 1 << "-> address: " << _inventory[i] << " value: " << _inventory[i]->getType() << std::endl;
	}
}

void	Character::freeinventory(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "Inventory of " << "<" << this->getName() << "> has been released" << std::endl;
}
