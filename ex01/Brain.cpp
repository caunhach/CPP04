/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:22 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 16:21:24 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "ideas";
	std::cout << "Brain has been created\n";
}

Brain::Brain(Brain const &src)
{
	std::string *ideas = src.getIdeas();
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
	std::cout << "A brain has been copied\n";
}

Brain::~Brain(void)
{
	delete []this->_ideas;
	std::cout << "Brain has been destroyed\n";
}

Brain	&Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdeas()[i];
	return (*this);
}

std::string	*Brain::getIdeas(void) const
{
	return (this->_ideas);
}

void	Brain::displayIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}

void	Brain::setIdeas(std::string const &idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}
