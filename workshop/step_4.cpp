/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   step_4.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 10:55:56 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 15:09:42 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/unicorn.hpp"

Image UnicornI = Image(UnicornData);
Image heart = Image(heartData);

void	Unicorn::print(void)
{
	Box		box;

	box = this->_init_box();
	gb.display.drawImage(box.position_x, box.position_y, UnicornI, S_CHAR_X, S_CHAR_X);
}