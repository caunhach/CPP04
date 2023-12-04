/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:21:28 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 16:21:30 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string *_ideas;
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);
		Brain &operator=(Brain const &rhs);
		std::string	*getIdeas(void) const;
};

#endif
