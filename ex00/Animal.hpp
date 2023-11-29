#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string		_type;
	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & rhs);

		std::string	const		&getType(void) const;
		virtual void			makeSound(void) const;
};

#endif
