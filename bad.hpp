/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bad.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 09:31:03 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 11:02:56 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef	__BAD_HPP__
# define __BAD_HPP__

# include "macro.hpp"
# include "image.hpp"
# include "vector2d.hpp"

class Bad
{
	private:
		Vector2d	_pos;
		Vector2d	_world_pos;
		int			_life;

	public:
		Bad(void);
		~Bad(void);

		void		print(void);
		void		setWorldPos(int x, int y);
		void		setPos(int x, int y);
		int			getWorldPosX(void);
		int			getWorldPosY(void);
		int			getPosX(void);
		int			getPosY(void);
};

#endif