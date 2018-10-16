/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:45:24 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 11:43:15 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "character.hpp"

Character::Character(int sizeX, int sizeY) : _size(sizeX, sizeY), _damages(2), _speed(1), _pos(0, 0), _world_pos(0, 0)
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
	this->_pos.getY() -= 8;
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
	return this->_pos.getY();
}

int&	Character::get_posX(void)
{
	return this->_pos.getX();
}

int		Character::getFoot(void)
{
	return this->_pos.getY() + this->_size.getY();
}

int		Character::getWorldPosX(void)
{
	return this->_world_pos.getX();
}

int		Character::getWorldPosY(void)
{
	return this->_world_pos.getY();
}