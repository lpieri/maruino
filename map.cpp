/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 15:11:34 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 18:53:50 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "map.hpp"

Map::Map(Image& dirt) : _len(101), _size(8, 8), _skin(dirt), _pos(0, 0), _starter(0)
{
	int		i = 0;

	this->_map = new int[this->_len];
	while (i < this->_len)
	{
		this->_map[i] = 0;
		i++;
	}
	this->_pos.setVector2d(0, gb.display.height() - this->_size.getY());
}

Map::~Map(void)
{
	return ;
}

void	Map::print(void)
{
	int		i = this->_starter;
	int		x = 0;
	int&	y = this->_pos.getY();
	int&	sizeX = this->_size.getX();
	int&	sizeY = this->_size.getY();

	while (i < this->_len)
	{
		gb.display.drawImage(x, y, this->_skin, sizeX, sizeY);
		x += sizeX;
		i++;
	}
}

int&	Map::getStarterMap(void)
{
	return this->_starter;
}

int		Map::getEarth(void)
{
	return this->_pos.getY();
}