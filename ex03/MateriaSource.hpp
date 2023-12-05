/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:55:19 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:55:21 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource &operator=(MateriaSource const &rhs);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
};

#endif
