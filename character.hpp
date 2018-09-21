/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:28:54 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/09/21 16:09:29 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <Gamebuino-Meta.h>
# include "vector2d.hpp"

class Character
{
	protected:
		Vector2d	pos;
		Vector2d	size;
		int const	damages;
		int const	speed;

	public:
		Character(int sizeX, int sizeY);
		~Character(void);

		virtual void	attack(void);
		virtual void	run(int& map_starter);
		virtual void	moveBack(int& map_starter);
		virtual void	jump(void);
		virtual void	sayHello(void) const;
		virtual void	print(void);
};

#endif