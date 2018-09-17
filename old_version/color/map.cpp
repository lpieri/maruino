/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 09:24:58 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 21:27:12 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.hpp"

Map::Map(void) : _bloc_size(8), _len_map(90), _pos_x(0), _pos_y(0), _i(0)
{
	return ;
}

Map::~Map()
{
	return ;
}

int		Map::get_earth(int pos) const
{
	int		dirt;

	dirt = gb.display.height() - this->_bloc_size - (this->_map[pos] * this->_bloc_size);
	return dirt;
}

int		Map::get_value_map(int pos_perso) const
{
	if (pos_perso < this->_len_map)
		return this->_map[pos_perso];
	return (-1);
}

int		Map::get_bloc_size(void) const
{
	return this->_bloc_size;
}

void	Map::print(int perso_in_map) const
{
	int		i;
	int		pos_x;
	int		pos_y;

	i = perso_in_map;
	pos_x = 0;
	pos_y = 0;
	gb.display.setColor(GREEN);
	while (i < this->_len_map)
	{
		pos_y = this->get_earth(i);
		gb.display.fillRect(pos_x, pos_y, this->_bloc_size, gb.display.height());
		pos_x += this->_bloc_size;
		i++;
	}
	return ;
}