/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bad.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 09:30:37 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 11:34:14 by delay       ###    #+. /#+    ###.fr     */
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
	// gb.display.drawImage(this->_pos.getX(), this->_pos.getY(), badImage, S_BAD, S_BAD);
	return ;
}