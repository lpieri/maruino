/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 15:11:34 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 11:45:46 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "map.hpp"

Map::Map(Image& dirt) : _len(101), _size(10, 10), _skin(dirt), _pos(0, 0), _starter(0)
{
	int		i = 0;

	this->_map = new int[this->_len];
	while (i < this->_len)
	{
		this->_map[i] = 0;
		if (i % 2 == 0)
			this->_map[i] = 1;
		i++;
	}
	this->_pos.setVector2d(0, gb.display.height() - this->_size.getY());
}

Map::~Map(void)
{
	return ;
}

int&	Map::getStarterMap(void)
{
	return this->_starter;
}

int		Map::getEarth(int character_pos)
{
	return (gb.display.height() - this->_size.getY() - (this->_map[character_pos] * this->_size.getY()));
	// return (gb.display.height() - this->_size.getY() - (this->_map[this->_starter] * this->_size.getY()));
}

void	Map::print(void)
{
	int		i = (this->_starter > 4) ? (this->_starter - 4) : 0;
	int		x = 0;
	int		y = this->getEarth(i);
	int&	sizeX = this->_size.getX();
	int&	sizeY = this->_size.getY();

	while (i < this->_len)
	{
		y = gb.display.height() - sizeY - (this->_map[i] * sizeY);
		gb.display.drawImage(x, y, this->_skin, sizeX, sizeY);
		x += sizeX;
		i++;
	}
}