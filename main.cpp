/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:51:21 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 19:47:55 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unicorn.hpp"
#include "bobby.hpp"
#include "display.hpp"
#include "world.hpp"

int				main(void)
{
	World*			world = new World();
	Display*		window = new Display("Game", 420, 420);
	Character*		ponyta = new Unicorn();
	int&			loop = window->get_loop();

	world->generate_map(0);
	ponyta->sayHello();
	ponyta->set_render_alias(window->get_render());
	world->set_render_alias(window->get_render());
	window->clear();
	ponyta->print();
	world->print();
	SDL_RenderPresent(window->get_render());
	while (loop)
	{
		SDL_WaitEvent(&window->e);
		if (window->e.type == SDL_QUIT)
			loop = 0;
		window->clear();
		ponyta->run(window->e);
		world->print();
		SDL_RenderPresent(window->get_render());
	}
	delete ponyta;
	delete window;
	return (0);
}
