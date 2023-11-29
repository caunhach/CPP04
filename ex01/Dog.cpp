#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog has been created" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copied Cat has been created" << std::endl;
	this->_type = src.getType();
}

Dog::~Dog()
{
	std::cout << "Cat has been destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}