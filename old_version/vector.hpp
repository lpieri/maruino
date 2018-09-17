/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementpieri <cpieri@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:24:30 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 17:33:42 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__VECTOR_HPP__
# define __VECTOR_HPP__

class Vector2d
{
	private:
		int		_x;
		int		_y;

	public:
		Vector2d(int x, int y);
		~Vector2d(void);

		void		set_vector(int x, int y);
		int&		get_x(void);
		int&		get_y(void);
};

#endif
