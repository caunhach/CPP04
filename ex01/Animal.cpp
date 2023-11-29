#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(std::string const &type)
{
	std::cout << "Animal : " << type << " has been created" << std::endl;
	this->_type = type;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copied Animal has been created" << std::endl;
	this->_type = src.getType();
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "... ..." << std::endl;
}

std::string const &Animal::getType( void ) const
{
	return (this->_type);
}