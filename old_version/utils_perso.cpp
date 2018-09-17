/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_perso.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 21:28:41 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 21:34:08 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "perso.hpp"

void	Perso::set_fell(bool value)
{
	this->_fell = value;
	return ;
}

void	Perso::set_run(bool value)
{
	this->_is_run = value;
	return ;
}

bool	Perso::get_fell(void) const
{
	return this->_fell;
}

int		Perso::get_posY(void) const
{
	return this->_pos_y;
}

int		Perso::get_posX(void) const
{
	return this->_pos_x;
}

void	Perso::set_pos(int x, int y)
{
	this->_pos_x = x;
	this->_pos_y = y;
}

int		Perso::get_world_pos(void) const
{
	return this->_world_pos_x;
}

void	Perso::_calc_pos_x(int world_pos)
{
	this->_pos_x = (world_pos * 8) + (4 - 2);
	return ;
}