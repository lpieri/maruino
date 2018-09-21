/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 14:56:39 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/09/21 16:07:14 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __MAP_HPP__
# define __MAP_HPP__

# include "vector2d.hpp"
# include <Gamebuino-Meta.h>


class Map
{
	private:
		int			_starter;
		int const	_len;
		Vector2d	_size;
		Vector2d	_pos;
		Image&		_skin;
		int*		_map;

	public:
		Map(Image& dirt);
		~Map(void);

		void	print(void);
		int&	getStarterMap(void);
};

#endif