/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector2d.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:01:26 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/09/21 12:54:49 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __VECTOR_HPP__
# define __VECTOR_HPP__

class Vector2d
{
	private:
		int		_x;
		int		_y;

	public:
		Vector2d(int x, int y);
		~Vector2d(void);

		void	setVector2d(int x, int y);
		int&	getX(void);
		int&	getY(void);
};

#endif