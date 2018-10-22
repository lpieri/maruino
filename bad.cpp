/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bad.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 09:30:37 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 11:51:34 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bad.hpp"

Image badImage = Image(badData);

Bad::Bad(void) : _pos(0, 0), _world_pos(0, 0), _life(10)
{
	return ;
}

Bad::~Bad(void)
{
	return ;
}

void	Bad::print(void)
{
	gb.display.drawImage(this->_pos.getX(), this->_pos.getY(), badImage, S_BAD, S_BAD);
	return ;
}

void	Bad::setWorldPos(int x, int y)
{
	this->_world_pos.setVector2d(x, y);
	return ;
}

void	Bad::setPos(int x, int y)
{
	this->_pos.setVector2d(x, y);
	return ;
}

int		Bad::getWorldPosX(void)
{
	return this->_world_pos.getX();
}

int		Bad::getWorldPosY(void)
{
	return this->_world_pos.getY();
}

int		Bad::getPosX(void)
{
	return this->_pos.getX();
}

int		Bad::getPosY(void)
{
	return this->_pos.getY();
}
