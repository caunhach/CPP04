/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:54:26 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:54:28 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const &src);
		Ice &operator=(const Ice &rhs);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
