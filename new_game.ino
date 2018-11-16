/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   new_game.ino                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:27:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/11/16 10:19:42 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/game.hpp"

Map*		maps = new Map();
// Rip stan lee ??
Unicorn* toto = new Unicorn();
World*		earth = new World(toto, maps);

void setup() {
	gb.begin();
	earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	// Events ??
	//if (gb.buttons.pressed(BUTTON_MENU))
		/*[redemarer le jeu]*/
	// Affichage ??
	
	earth->print();
	maps->print();
  toto->print();
  
	// Physique ??
  earth->add_physics();
}
