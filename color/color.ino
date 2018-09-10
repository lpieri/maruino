/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.ino                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 09:25:04 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/31 10:53:58 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.hpp"

World	world;

void setup() {
  gb.begin();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	world.perso.run();
	world.perso.jump();
	world.print();
}
