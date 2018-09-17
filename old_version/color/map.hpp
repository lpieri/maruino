/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 09:24:50 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 21:27:11 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAP_HPP__
# define __MAP_HPP__

# include <Gamebuino-Meta.h>

class Map
{
	private:
		int const	_pos_x;
		int const	_pos_y;
		int const	_bloc_size;
		int const	_len_map;
		int			_i;
		int			_map[90] = {
			0, 0, 0, 0, 0, 0, -2, 0, 0, 1,
			1, 1, 1, 1, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		};

	public:
		Map(void);
		~Map(void);

		int		get_earth(int pos) const;
		void	print(int perso_in_map) const;
		int		get_value_map(int pos_perso) const;
		int		get_bloc_size(void) const;
};

#endif