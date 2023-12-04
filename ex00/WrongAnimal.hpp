/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:45:19 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:45:25 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string		_type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);
		WrongAnimal & operator=(WrongAnimal const & rhs);

		std::string	const		&getType(void) const;
		void			makeSound(void) const;
};

#endif
