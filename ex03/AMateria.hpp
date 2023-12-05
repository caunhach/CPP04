/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:52:28 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:52:30 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		bool		_equip;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria const & ref);
		AMateria &operator=(AMateria const &rhs);
		std::string const & getType() const;
		bool const & getEquip() const;
		void 		setEquip(bool status);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif
