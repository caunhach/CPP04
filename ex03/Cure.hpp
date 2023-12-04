/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:53:09 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:53:11 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &src);
		Cure &operator=(const Cure &rhs);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
