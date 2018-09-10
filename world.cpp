/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 10:21:15 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/31 11:59:13 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.hpp"

World::World(void) : _gravity(2)
{
	return ;
}

World::~World(void)
{
	return ;
}

int		World::_check_collision(void)
{
	int		dirt;
	int		pp_y;

	dirt = this->maps.get_earth(this->perso.get_world_pos());
	pp_y = this->perso.get_posY() + 4;
	gb.display.print(pp_y);
	if ((pp_y + this->_gravity) == dirt)
	{
		this->perso.set_fell(false);
		this->perso.set_pos(this->perso.get_posX(), dirt - 4);
	}
	else if ((this->perso.get_posY() + 4) < dirt)
		this->perso.set_fell(true);
	else if (pp_y > this->maps.get_earth(this->perso.get_world_pos() + 1))
		this->perso.set_run(false);
	else if (this->maps.get_earth(this->perso.get_world_pos() - 1) > pp_y)
		this->perso.set_run(false);
	else if (pp_y == this->maps.get_earth(this->perso.get_world_pos() + 1))
		this->perso.set_run(true);
}

int		World::_check_gravity(void)
{
	int		speed;

	speed = 0;
	_check_collision();
	if (this->perso.get_fell() == true)
	{
		speed = this->perso.get_posY() + this->_gravity;
		this->perso.set_pos(this->perso.get_posX(), speed);
		return (1);
	}
	return (0);
}

void	World::print(void)
{
	int		pos;

	_check_gravity();
	pos = this->perso.get_world_pos();
	pos = (pos <= 5) ? 0 : pos - 5;
	this->perso.print();
	this->maps.print(pos);
	return ;
}