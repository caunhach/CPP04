/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:44:51 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 15:44:53 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Dog & operator=(Dog const & rhs);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif
