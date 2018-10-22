/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   world.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 14:10:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 14:27:55 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# include "world.hpp"
# include "level.hpp"

Image skyImage = Image(skyData);
Image le101 = Image(schoolData);

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

void	World::print_sky(void) const
{
	gb.display.drawImage(0, 0, skyImage, WIDTH, HEIGHT);
}

void	World::restart_game(void)
{
	this->_maps->getStarterMap() = 0;
	this->_character->get_posX() = 0;
	this->_character->get_posY() = 0;
	this->_character->setWorldPosX(0);
	this->_character->getIsFall() = true;
	this->_character->getIsRun() = true;
	this->_character->getIsMoveBack() = true;
}

void	World::check_end(void)
{
	int		character_foot;
	int		the_bad;
	bool	bad;

	character_foot = this->_character->getFoot();
	bad = this->_maps->checkBadExist(this->_character->getWorldPosX());
	the_bad = this->_maps->getEarth(this->_character->getWorldPosX()) - S_BAD;
	if (character_foot >= HEIGHT || (bad && character_foot >= the_bad))
	{
		if (this->_character->getLife() > 0)
		{
			this->_character->getLife() -= 1;
			this->restart_game();
		}
		else if (this->_character->getLife() == 0)
			this->_game_over();
	}
}

void	World::_game_over(void)
{
	int		centerX;
	int		centerY;
	bool	iloop;

	iloop = true;
	centerX = (WIDTH / 2) - (S_LE101 / 2);
	centerY = (HEIGHT / 2) - (S_LE101 / 2);
	gb.display.clear();
	gb.display.setFontSize(1);
	gb.display.setCursor(centerX, centerY);
	gb.display.print("GAME OVER !!!");
	while (iloop)
	{
		while (!gb.update()){
			if (gb.buttons.pressed(BUTTON_A))
				iloop = false;
		}
	}
	this->_character->getLife() = 3;
	this->restart_game();
}

// int		World::_count_bad(int const * level)
// {
// 	int		i;
// 	int		bad;

// 	i = 0;
// 	bad = 0;
// 	while (i < LEN_MAP)
// 	{
// 		if (level[i] == 1)
// 			bad++;
// 		i++;
// 	}
// 	return (bad);
// }

// void	World::_init_bad(int const * level)
// {
// 	int 	pos_x = 0;
// 	int 	pos_y = 0;

// 	for (int i = 0; i < this->_nb_bad; i++)
// 	{
// 		for (int count_pos_x = this->_character->getWorldPosX(); count_pos_x < LEN_MAP; count_pos_x++)
// 		{
// 			if (level[count_pos_x] == 1)
// 			{
// 				pos_x = S_BLOCK_X * (count_pos_x - this->_character->getWorldPosX());
// 				pos_y = this->_maps->getEarth(count_pos_x);
// 				this->_the_bad[i].setWorldPos(count_pos_x, 0);
// 				this->_the_bad[i].setPos(pos_x, pos_y);
// 				this->_the_bad[i].print();
// 				break;
// 			}
// 		}
// 	}
// }

// void	World::_add_bad(void)
// {
// 	int const *	level = level1[0];

// 	this->_nb_bad = _count_bad(level);
// 	this->_the_bad = new Bad[this->_nb_bad];
// 	_init_bad(level);
// }

// void	World::bad_print(void)
// {
// 	int const *	level = level1[0];

// 	_init_bad(level);
// }

void	World::start_game(void)
{
	int		centerX;
	int		centerY;
	bool	iloop;

	iloop = true;
	centerX = (WIDTH / 2) - (S_LE101 / 2);
	centerY = (HEIGHT / 2) - (S_LE101 / 2);
	// this->_add_bad();
	gb.display.clear(WHITE);
	gb.display.drawImage(centerX, centerY, le101, S_LE101, S_LE101);
	while (iloop)
	{
		while (!gb.update()){
			if (gb.buttons.pressed(BUTTON_A))
				iloop = false;
		}
	}
}