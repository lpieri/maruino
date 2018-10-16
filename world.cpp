/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   world.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 14:10:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 11:42:04 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# include "world.hpp"

World::World(Character* character, Map* maps) : _character(character), _maps(maps), _gravity(1)
{
	return ;
}

World::~World(void)
{
	return ;
}

void	World::_set_gravity(void)
{
	// gb.display.print(this->_character->get_posY() + this->_gravity);
	this->_character->get_posY() += this->_gravity;
	return ;
}

void	World::_check_colision(void)
{
	if (this->_character->getFoot() != this->_maps->getEarth(this->_character->getWorldPosX()))
		this->_set_gravity();
	return ;
}

void	World::add_physical(void)
{
	this->_check_colision();
	return ;
}