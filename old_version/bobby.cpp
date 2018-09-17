/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bobby.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:13:09 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 16:07:50 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bobby.hpp"

Mole::Mole(int x, int y) : Character(5, 50, x, y)
{
	return ;
}

Mole::~Mole(void)
{
	return ;
}

void	Mole::sayHello(void) const
{
	std::cout << "Hello I'm a Ponyta" << std::endl;
	return ;
}

void	Mole::attack(void)
{
	return ;
}

void	Mole::print(SDL_Renderer* render)
{
	SDL_Rect	character;

	character.x = Character::pos.get_x();
	character.y = Character::pos.get_y();
	character.w = Character::size;
	character.h = Character::size;
	SDL_SetRenderDrawColor(render, 222, 0, 101, 255);
	SDL_RenderFillRect(render, &character);
	SDL_RenderPresent(render);
	return ;
}

void	Mole::run(SDL_Event& event)
{
	if (event.type == SDL_KEYDOWN)
		if (event.key.keysym.sym == SDLK_LEFT)
			Character::pos.get_x() += 3;
}
