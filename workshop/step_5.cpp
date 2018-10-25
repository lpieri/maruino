/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   step_5.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 10:55:56 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 16:17:57 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/unicorn.hpp"

Image UnicornI = Image(UnicornData);
Image heart = Image(heartData);

void	Unicorn::print(void)
{
	Box		box;
	int 	i = 0;

	box = this->_init_box();
	gb.display.drawImage(box.position_x, box.position_y, UnicornI, S_CHAR_X, S_CHAR_X);
	while (i <= box.life)
	{
		gb.display.drawImage(box.position_heart_x, 0, heart, S_HEART, S_HEART);
		box.position_heart_x -= S_HEART + 2;
		i++;
	}
}