/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   world.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 14:10:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 16:29:18 by delay       ###    #+. /#+    ###.fr     */
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
	int		character_foot;
	int		earth;
	int		next_earth;
	int		last_earth;

	character_foot = this->_character->getFoot();
	earth = this->_maps->getEarth(this->_character->getWorldPosX());
	next_earth = this->_maps->getEarth(this->_character->getWorldPosX() + 1);
	last_earth = this->_maps->getEarth(this->_character->getWorldPosX() - 1);
	if (character_foot < earth)
	{
		this->_set_gravity();
		this->_character->getIsFall() = false;
	}
	if (character_foot == earth)
		this->_character->getIsFall() = true;
	if (character_foot > next_earth)
		this->_character->getIsRun() = false;
	if (character_foot <= next_earth)
		this->_character->getIsRun() = true;
	if (character_foot > last_earth && this->_character->getWorldPosX() > 0)
		this->_character->getIsMoveBack() = false;
	if (character_foot <= last_earth && this->_character->getWorldPosX() > 0)
		this->_character->getIsMoveBack() = true;
	return ;
}

void	World::add_physical(void)
{
	this->_check_colision();
	return ;
}