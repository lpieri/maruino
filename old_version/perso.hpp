/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perso.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 09:24:40 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 21:27:10 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PERSO_HPP__
# define __PERSO_HPP__

# include <Gamebuino-Meta.h>

class Perso
{
	private:
		int const	_size;
		int			_world_pos_x;
		int			_world_pos_y;
		bool		_fell;
		bool		_is_run;
		double		_pos_x;
		double		_pos_y;

		void		_calc_pos_x(int world_pos_x);

	public:
		Perso(void);
		~Perso(void);

		void		set_pos(int x, int y);
		void		set_fell(bool value);
		void		set_run(bool value);
		bool		get_fell(void) const;
		int			get_posX(void) const;
		int			get_posY(void) const;
		int			get_world_pos(void) const;
		void		run(void);
		void		jump(void);
		void		print(void) const;
};

#endif