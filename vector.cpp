/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementpieri <cpieri@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:28:02 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 17:34:10 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

Vector2d::Vector2d(int x, int y) : _x(x), _y(y)
{
	return ;
}

Vector2d::~Vector2d(void)
{
	return ;
}

int&		Vector2d::get_x(void)
{
	return this->_x;
}

int&		Vector2d::get_y(void)
{
	return this->_y;
}

void		Vector2d::set_vector(int x, int y)
{
	this->_x = x;
	this->_y = y;
}
