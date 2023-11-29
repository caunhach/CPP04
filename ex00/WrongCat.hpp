#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat(void);
		WrongCat(Animal const & src);
		virtual ~WrongCat(void);
		WrongCat & operator=(WrongCat const & rhs);

		virtual void			makeSound(void) const;
};

#endif