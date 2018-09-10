/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perso.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 09:26:33 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/31 11:15:10 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "perso.hpp"

Perso::Perso(void) : _size(4), _world_pos_x(0),  _world_pos_y(0),
	_pos_y(0), _fell(true), _is_run(true)
{
	_calc_pos_x(0);
	return ;
}

Perso::~Perso(void)
{
	return ;
}

void	Perso::run(void)
{
	if (this->_is_run == true && this->_pos_x < (gb.display.width() / 2) && gb.buttons.repeat(BUTTON_RIGHT, 0)) {
		this->_world_pos_x++;
		_calc_pos_x(this->_world_pos_x);
	}
	if (this->_is_run == true && this->_pos_x >= (gb.display.width() / 2) && gb.buttons.repeat(BUTTON_RIGHT, 0)) {
		this->_world_pos_x++;
	}
	if (this->_world_pos_x > 0 && this->_world_pos_x <= 5 && gb.buttons.repeat(BUTTON_LEFT, 0)) {
		this->_world_pos_x--;
		_calc_pos_x(this->_world_pos_x);
	}
	if (this->_world_pos_x > 5 && gb.buttons.repeat(BUTTON_LEFT, 0)) {
		this->_world_pos_x--;
	}
	return ;
}

void	Perso::jump(void)
{
	if (this->_fell != true && gb.buttons.pressed(BUTTON_A))
	{
		this->_pos_y -= 16;
		this->_fell = true;
		this->_is_run = true;
	}
}

void	Perso::print(void) const
{
	gb.display.setColor(RED);
	gb.display.fillRect(this->_pos_x, this->_pos_y, this->_size, this->_size);
	return ;
}
