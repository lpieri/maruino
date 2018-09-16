/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:51:21 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 18:41:09 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unicorn.hpp"
#include "bobby.hpp"
#include "display.hpp"

int				main(void)
{
	Display*		window = new Display("Game", 420, 420);
	Character*		ponyta = new Unicorn();
	int&			loop = window->get_loop();

	ponyta->sayHello();
	ponyta->set_render_alias(window->get_render());
	window->clear();
	ponyta->print();
	SDL_RenderPresent(window->get_render());
	while (loop)
	{
		SDL_WaitEvent(&window->e);
		if (window->e.type == SDL_QUIT)
			loop = 0;
		window->clear();
		ponyta->run(window->e);
	}
	delete ponyta;
	delete window;
	return (0);
}
