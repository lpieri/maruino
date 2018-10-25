/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   step_3.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 14:07:49 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 14:30:57 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/game.hpp"

Map*		maps = new Map();
World*		earth = new World(pedro, maps);

void setup() {
	gb.begin();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	earth->print_sky();
	maps->print();
}