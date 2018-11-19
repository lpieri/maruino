/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   step_4.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:27:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 15:47:18 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/game.hpp"

Map*		maps = new Map();
Character*	licorne = new Unicorn()
World*		earth = new World(licorne, maps);

void setup() {
	gb.begin();
	earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	/*
	**Events ??
	** if (gb.buttons.pressed(BUTTON_MENU))
	**	[redemarer le jeu]
	** Affichage ??
	*/
	earth->print();
	maps->print();
	licorne->print();
	earth->add_physics();
}
