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
	std::cout << "Constructor of Character called\n";
}

Character::Character(std::string const &name)
{
	this->_name = name;
	std::cout << "Constructor of Character called\n";
}

Character::~Character()
{
	std::cout << "Destructor of Character called\n";
}

Character::Character(Character const &src) : _name(src.getName() + ".copy")
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
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
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
		_inventory[idx] = NULL;
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
