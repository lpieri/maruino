/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 18:56:15 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 19:46:22 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.hpp"
#include <iostream>

World::World(void) : len(100), gravity(10), difficulty(0), size(82)
{
	return ;
}

World::~World(void)
{
	delete this->map;
	return ;
}

int		World::generate_map(int const difficulty)
{
	int		i = 0;
	int*	tab = new int[this->len];

	if (difficulty < 0 && difficulty > 3)
		return (-1);
	while (i < this->len)
	{
		tab[i] = std::rand() % 3;
		std::cout << tab[i] << ' ';
		i++;
	}
	map = tab;
	std::cout << std::endl;
	return (0);
}

void	World::print(void)
{
	int			i = 0;
	SDL_Rect	bloc;

	bloc.x = 0;
	bloc.y = 420 - this->size;
	bloc.w = this->size;
	bloc.h = this->size;
	while (i < this->len)
	{
		bloc.y = 420 - this->size - (this->map[i] * this->size);
		SDL_RenderFillRect(this->render, &bloc);
		bloc.x += this->size;
		i++;
	}
}

void	World::set_render_alias(SDL_Renderer* render)
{
	this->render = render;
}
