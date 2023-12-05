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
	Ice	ice;
	Cure cure;
	Ice ice1(ice);
	Cure cure1(cure);
	Ice ice2;
	Cure cure2;
	ice2 = ice1;
	cure2 = cure1;
	std::cout << "ice : " << ice.getType() << std::endl;
	std::cout << "cure : " << cure.getType() << std::endl;
	std::cout << "ice1 : " << ice1.getType() << std::endl;
	std::cout << "cure1 : " << cure1.getType() << std::endl;
	std::cout << "ice2 : " << ice.getType() << std::endl;
	std::cout << "cure2 : " << cure1.getType() << std::endl;
	AMateria	*mat_ice;
	AMateria	*mat_cure;
	mat_ice = ice.clone();
	mat_cure = cure.clone();
	std::cout << "mat_ice : " << ice.getType() << std::endl;
	std::cout << "mat_cure : " << cure.getType() << std::endl;
	Character	player1("player1");
	Character	player2("player2");
	player1.equip(&ice);
	player1.equip(&ice1);
	player1.equip(mat_cure);
	player1.equip(&ice);
	player2.equip(&ice);
	player2.equip(mat_ice);
	player1.showinventory();
	player2.showinventory();
	player1.unequip(0);
	player1.equip(&ice2);
	player1.equip(&cure);
	player2.equip(&cure1);
	player2.equip(&ice);
	player1.equip(&cure2);
	player2.equip(&cure2);
	player1.showinventory();
	player2.showinventory();
	player1.use(0, player2);
	player1.use(1, player2);
	player1.use(2, player2);
	player1.use(3, player2);
	player2.use(0, player1);
	player2.use(1, player1);
	player2.use(2, player1);
	player2.use(3, player1);
	Character	player3(player1);
	player1.showinventory();
	player3.showinventory();
	player1.unequip(0);
	player1.showinventory();
	player3.showinventory();
	player3.freeinventory();
	delete mat_ice;
	delete mat_cure;
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
	return (0);
}
