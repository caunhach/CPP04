/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:54:49 by caunhach          #+#    #+#             */
/*   Updated: 2023/12/04 20:54:50 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		std::cout << RED << "\n test according to subject's example \n" << std::endl << RESET;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << RED << "\n concrete class test \n" << std::endl << RESET;
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		Character *me = new Character("Best");
		AMateria	*tmp;
		AMateria	*tmp1;
		AMateria	*tmp2;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp1 = src->createMateria("cure");
		me->equip(tmp1);
		tmp2 = src->createMateria("Fire");
		me->equip(tmp2);
		Character *me2 = new Character("Jenny");
		AMateria	*_tmp;
		AMateria	*_tmp1;
		AMateria	*_tmp2;
		ICharacter	*_me = me;
		ICharacter	*_me2 = me2;
		_tmp = src->createMateria("ice");
		me2->equip(_tmp);
		_tmp1 = src->createMateria("cure");
		me2->equip(_tmp1);
		_tmp2 = src->createMateria("Fire");
		me2->equip(_tmp2);
		me2->unequip(0);
		me2->unequip(2);
		me2->unequip(-1);
		me2->unequip(18);
		me->showinventory();
		me2->showinventory();
		std::cout << "\n";
		_me->use(0, *_me2);
		_me->use(1, *_me2);
		_me->use(2, *_me2);
		_me->use(3, *_me2);
		_me2->use(0, *_me);
		_me2->use(1, *_me);
		_me2->use(2, *_me);
		_me2->use(3, *_me);
		std::cout << RED << "\n deep copy for clone \n" << std::endl << RESET;

		me2->equip(_tmp1->clone());
		me2->showinventory();

		std::cout << RED << "\n deep copy for Icharacter \n" << std::endl << RESET;
		
		Character me3("Bright");
		AMateria *tmp3 = new Cure();
		me3.equip(new Ice());
		me3.equip(tmp3);
		me3.equip(new Cure());
		me3.equip(new Cure());
		Character me4(me3);
		Character me5 = me3;
		me3.showinventory();
		me4.showinventory();
		me5.showinventory();
		me3.unequip(1);
		me3.showinventory();
		me4.showinventory();
		me5.showinventory();

		delete _tmp;
		delete tmp3;
		delete src;
		delete me;
		delete me2;
	}
	return (0);
}
