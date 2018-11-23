/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_4.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 11:27:16 by delay             #+#    #+#             */
/*   Updated: 2018/11/23 10:33:01 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includes/game.hpp"

Map*		maps = new Map();
Character*	licorne = new Unicorn();
World*		earth = new World(licorne, maps);

void setup() {
	gb.begin();
	earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	if (gb.buttons.repeat(BUTTON_RIGHT, 3))
		licorne->run(maps->getStart());
	if (gb.buttons.repeat(BUTTON_LEFT, 3))
		licorne->moveBack(maps->getStart());
	if (gb.buttons.pressed(BUTTON_A))
		licorne->jump();
	if (gb.buttons.pressed(BUTTON_MENU))
		earth->restart_game();
	earth->print();
	maps->print();
	licorne->print();
	earth->add_physics();
}