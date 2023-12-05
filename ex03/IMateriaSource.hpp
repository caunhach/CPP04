/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:54:06 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:54:08 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# define IMATERIA_HPP

#include "ICharacter.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
