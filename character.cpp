/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:45:24 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/09/29 15:27:07 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "character.hpp"

Character::Character(int sizeX, int sizeY) : size(sizeX, sizeY), damages(2), speed(3), pos(0, 0)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

void	Character::sayHello(void) const
{
	gb.display.setColor(YELLOW);
	gb.display.setFontSize(0.01);
	gb.display.setCursor(10, 10);
	gb.display.print("Bonjour je suis lambda!");
}

void	Character::run(int& map_starter)
{
	return ;
}

void	Character::moveBack(int& map_starter)
{
	return ;
}

void	Character::jump(void)
{
	return ;
}

void	Character::print(void)
{
	return ;
}

void	Character::attack(void)
{
	return ;
}

int&	Character::get_posY(void)
{
	return this->pos.getY();
}

int&	Character::get_posX(void)
{
	return this->pos.getX();
}
