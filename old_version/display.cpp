/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:19:16 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 18:31:14 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.hpp"

Display::Display(std::string const & title, int x, int y) : _loop(1)
{
	this->_win = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED, x, y, 0);
	this->_rend = SDL_CreateRenderer(this->_win, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	return ;
}

Display::~Display(void)
{
	SDL_DestroyRenderer(this->_rend);
	SDL_DestroyWindow(this->_win);
	SDL_Quit();
	return ;
}

void			Display::clear(void)
{
	SDL_SetRenderDrawColor(this->_rend, 0, 0, 0, 255);
	SDL_RenderClear(this->_rend);
}

SDL_Renderer*	Display::get_render(void)
{
	return this->_rend;
}

int&			Display::get_loop(void)
{
	return this->_loop;
}
