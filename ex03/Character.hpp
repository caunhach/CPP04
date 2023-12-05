/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:52:50 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:52:52 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter 
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character();
		Character(std::string const &name);
		~Character();
		Character(Character const &src);
		Character &operator=(Character const &rhs);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void showinventory(void);
		void freeinventory(void);
};

#endif
