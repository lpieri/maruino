/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementpieri <cpieri@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:28:02 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 20:10:25 by clementpier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

Vector2d::Vector2d(void) : _x(0), _y(0)
{
	return ;
}

Vector2d::~Vector2d(void)
{
	return ;
}

int		Vector2d::get_val_x(void) const
{
	return this->_x;
}

int		Vector2d::get_val_y(void) const
{
	return this->_y;
}

int		Vector2d::set_vector(int x, int y)
{
	if (x > 0 && y > 0)
	{
		this->_x = x;
		this->_y = y;
		return 1;
	}
	return 0;
}