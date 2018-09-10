/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementpieri <cpieri@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:24:30 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 20:10:34 by clementpier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__VECTOR_HPP__
# define __VECTOR_HPP__

class Vector2d
{
	private:
		int		_y;
		int		_x;

	public:
		Vector2d(void);
		~Vector2d(void);

		int			set_vector(int x, int y);
		int			get_val_x(void) const;
		int			get_val_y(void) const;
		Vector2d	get_vector(void) const;
};

#endif