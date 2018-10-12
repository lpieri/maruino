/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 14:10:16 by delay             #+#    #+#             */
/*   Updated: 2018/10/12 14:56:59 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "world.hpp"

World::World(Character* character, Map* maps) : _character(character), _maps(maps), _gravity(10)
{
	return ;
}

World::~World(void)
{
	return ;
}

void	World::_set_gravity(void)
{
	gb.display.print(this->_character->get_posY() + this->_gravity);
	this->_character->get_posY() += this->_gravity;
	return ;
}

void	World::_check_colision(void)
{
	return ;
}

void	World::add_physical(void)
{
	this->_set_gravity();
	this->_check_colision();
	return ;
}