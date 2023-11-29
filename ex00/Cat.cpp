#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat has been created" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copied Cat has been created" << std::endl;
	this->_type = src.getType();
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
