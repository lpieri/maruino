/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 15:11:34 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 17:09:39 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "map.hpp"
#include "level.hpp"

Image earth_2 = Image(earth_2Data);
Image badImage = Image(badData);
Image DirtI = Image(DirtData);
Image flagImage = Image(flagData);

Map::Map(void) : _len(101), _size(S_BLOCK_X, S_BLOCK_Y), _pos(0, 0), _starter(0)
{
	this->_map = level1[1];
	this->_bad = level1[0];
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
	int const	earth = HEIGHT - S_BLOCK_Y - (this->_map[character_pos] * S_BLOCK_Y);

	return (earth);
}

bool	Map::checkBadExist(int character_pos)
{
	if (this->_bad[character_pos] == 1)
		return true;
	return false;
}

bool	Map::checkFlagExist(int character_pos)
{
	if (this->_bad[character_pos] == 2)
		return true;
	return false;
}

void	Map::print(void)
{
	int 	i = this->_starter;
	int		x = 0;
	int		y = this->getEarth(i);
	int&	sizeX = this->_size.getX();
	int&	sizeY = this->_size.getY();

	while (i < this->_len)
	{
		y = gb.display.height() - sizeY - (this->_map[i] * sizeY);
		gb.display.drawImage(x, y, DirtI, sizeX, sizeY);
		if (this->_bad[i] == 1)
		{
			y = gb.display.height() - sizeY - (this->_map[i] * sizeY) - S_BAD;
			gb.display.drawImage(x, y, badImage, S_BAD, S_BAD);
		}
		if (this->_bad[i] == 2)
		{
			y = gb.display.height() - sizeY - (this->_map[i] * sizeY) - S_FLAG_Y;
			gb.display.drawImage(x, y, flagImage, S_FLAG_X, S_FLAG_Y);
		}
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