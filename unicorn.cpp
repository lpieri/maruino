/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicorn.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:13:09 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 19:56:08 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unicorn.hpp"

Unicorn::Unicorn(void) : Character(10, 42)
{
	return ;
}

Unicorn::~Unicorn(void)
{
	return ;
}

void	Unicorn::sayHello(void)
{
	std::cout << "Hello I'm a Ponyta" << std::endl;
	return ;
}

void	Unicorn::print(void)
{
	SDL_Rect	character;

	character.x = Character::pos.get_x();
	character.y = Character::pos.get_y();
	character.w = Character::size;
	character.h = Character::size;
	SDL_SetRenderDrawColor(this->render, 222, 0, 101, 255);
	SDL_RenderFillRect(this->render, &character);
	return ;
}

void	Unicorn::attack(void)
{
	SDL_Rect	attack;

	attack.x = Character::pos.get_x() + Character::size;
	attack.y = Character::pos.get_y() + (Character::size / 2);
	attack.w = Character::damage;
	attack.h = 5;
	while (attack.x < 420)
	{
		SDL_SetRenderDrawColor(this->render, 0, 0, 0, 255);
		SDL_RenderClear(this->render);
		this->print();
		SDL_SetRenderDrawColor(this->render, 142, 121, 101, 255);
		SDL_RenderFillRect(this->render, &attack);
		SDL_RenderPresent(this->render);
		attack.x += 3;
	}
	return ;
}

void	Unicorn::run(SDL_Event& event)
{
	if (event.type == SDL_KEYDOWN)
		if (event.key.keysym.sym == SDLK_RIGHT)
		{
			Character::pos.get_x() += 3;
			this->print();
		}
		if (event.key.keysym.sym == SDLK_a)
			this->attack();
}
