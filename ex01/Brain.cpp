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
	std::cout << "Brain has been created" << std::endl;
}

Brain::~Brain(void)
{
	delete []this->_ideas;
	std::cout << "Brain has been destroyed\n";
}
