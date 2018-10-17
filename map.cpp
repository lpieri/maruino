/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 15:11:34 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 15:12:00 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "map.hpp"

Image earth_2 = Image(earth_2Data);
Image DirtI = Image(DirtData);

Map::Map(void) : _len(101), _size(S_BLOCK_X, S_BLOCK_Y), _pos(0, 0), _starter(0)
{
	int		i = 0;

	this->_map = new int[this->_len];
	while (i < this->_len)
	{
		this->_map[i] = 0;
		if (i % 10 == 0)
			this->_map[i] = -2;
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
}

void	Map::print(void)
{
	int		i = this->_starter;
	int		x = 0;
	int		y = this->getEarth(i);
	int&	sizeX = this->_size.getX();
	int&	sizeY = this->_size.getY();

	while (i < this->_len)
	{
		y = gb.display.height() - sizeY - (this->_map[i] * sizeY);
		gb.display.drawImage(x, y, DirtI, sizeX, sizeY);
		if (this->_map[i] >= 1)
		{
			while (y < HEIGHT)
			{
				y += sizeY;
				gb.display.drawImage(x, y, earth_2, sizeX, sizeY);
			}
		}
		x += sizeX;
		i++;
	}
}