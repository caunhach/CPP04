#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat has been created" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "Copied WrongCat has been created" << std::endl;
	this->_type = src.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "fake Meow Meow" << std::endl;
}
