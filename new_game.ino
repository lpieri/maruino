/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   new_game.ino                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:27:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 15:52:36 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game.hpp"

Map*		maps = new Map();
Character*	pedro = new Unicorn();
World*		earth = new World(pedro, maps);

void setup() {
	gb.begin();
	earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	if (gb.buttons.repeat(BUTTON_RIGHT, 1))
		pedro->run(maps->getStarterMap());
	if (gb.buttons.repeat(BUTTON_LEFT, 1))
		pedro->moveBack(maps->getStarterMap());
	if (gb.buttons.pressed(BUTTON_A))
		pedro->jump();
	if (gb.buttons.pressed(BUTTON_MENU))
		earth->restart_game();
	earth->print_sky();
	maps->print();
	pedro->print();
	earth->add_physical();
	earth->check_end();
}
