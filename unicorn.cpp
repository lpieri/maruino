/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:41:10 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 16:44:38 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "unicorn.hpp"

Unicorn::Unicorn(Image& image) : _skin(image), speed(3), damages(10), Character(25/1.2, 20/1.2)
{
}

Unicorn::~Unicorn(void)
{
}

void	Unicorn::sayHello(void) const
{
	gb.display.setColor(YELLOW);
	gb.display.setFontSize(0.01);
	gb.display.setCursor(10, 10);
	gb.display.print("Bonjour je suis Kat!");
}

void	Unicorn::print(void)
{
	int&		x = Character::pos.getX();
	int&		y = Character::pos.getY();
	int&		sizeX = Character::size.getX();
	int&		sizeY = Character::size.getY();

	gb.display.drawImage(x, y, this->_skin, sizeX, sizeY);
}

void	Unicorn::run(int& map_starter)
{
	if (Character::pos.getX() < (gb.display.width() / 2))
		Character::pos.getX() += this->speed;
	if (map_starter < 101)
		map_starter += this->speed;
}

void	Unicorn::moveBack(int& map_starter)
{
	if (Character::pos.getX() > 0)
		Character::pos.getX() -= this->speed;
	if (map_starter > 0)
		map_starter -= this->speed;
}