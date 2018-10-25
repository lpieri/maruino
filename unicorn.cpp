/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:41:10 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 09:45:46 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/unicorn.hpp"

Image UnicornI = Image(UnicornData);
Image heart = Image(heartData);

Unicorn::Unicorn(void) : _speed(1), _damages(10), Character(8, 8)
{
}

Unicorn::~Unicorn(void)
{
}

void	Unicorn::sayHello(void) const
{
	gb.display.setColor(YELLOW);
	gb.display.setFontSize(0.01);
	gb.display.setCursor(10, 10);
	gb.display.print("Bonjour je suis Ponyta!");
}

void	Unicorn::print(void)
{
	int		x = Character::_pos.getX();
	int		y = Character::_pos.getY();
	int		sizeX = Character::_size.getX();
	int		sizeY = Character::_size.getY();
	int		life = Character::_life;
	int		hx = WIDTH - S_HEART;

	gb.display.drawImage(x, y, UnicornI, sizeX, sizeY);
	for (int i = 0; i <= life; i++)
	{
		gb.display.drawImage(hx, 0, heart, S_HEART, S_HEART);
		hx -= S_HEART + 2;
	}
}

void	Unicorn::run(int& map_starter)
{
	int		posX = (Character::_pos.getX() + Character::_size.getX());

	if (Character::_is_run == true)
	{
		if (posX < (WIDTH / 2))
		{
			Character::_pos.getX() += this->_speed + S_BLOCK_X;
			Character::_world_pos.getX() += this->_speed;
		}
		else if (map_starter < LEN_MAP && posX >= (WIDTH / 2))
		{
			Character::_world_pos.getX() += this->_speed;
			map_starter += this->_speed;
		}
	}
}

void	Unicorn::moveBack(int& map_starter)
{
	if (Character::_is_move_back == true && Character::_world_pos.getX() > map_starter)
	{
		Character::_pos.getX() -= this->_speed + S_BLOCK_X;
		Character::_world_pos.getX() -= this->_speed;
	}
}