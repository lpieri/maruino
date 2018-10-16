/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:41:10 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 12:07:21 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "unicorn.hpp"

Unicorn::Unicorn(Image& image) : _skin(image), _speed(1), _damages(10), Character(8, 8)
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
	gb.display.print("Bonjour je suis Ponyta!");
}

void	Unicorn::print(void)
{
	int		x = Character::_pos.getX();
	int		y = Character::_pos.getY();
	int		sizeX = Character::_size.getX();
	int		sizeY = Character::_size.getY();

	// x += (sizeX / 2) - (8 / 2);
	gb.display.drawImage(x, y, this->_skin, sizeX, sizeY);
}

void	Unicorn::run(int& map_starter)
{
	int		posX = (Character::_pos.getX() + Character::_size.getX());

	if (posX < (WIDTH / 2))
	{
		Character::_pos.getX() += this->_speed + S_BLOCK_X;
		Character::_world_pos.getX() += this->_speed;
	}
	else if (map_starter < 101 && posX >= (WIDTH / 2))
	{
		Character::_world_pos.getX() += this->_speed;
		map_starter += this->_speed;
	}
}

void	Unicorn::moveBack(int& map_starter)
{
	if (Character::_world_pos.getX() > map_starter)
	{
		Character::_pos.getX() -= this->_speed + S_BLOCK_X;
		Character::_world_pos.getX() -= this->_speed;
	}
}