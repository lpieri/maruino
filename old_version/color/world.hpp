/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 10:13:22 by cpieri            #+#    #+#             */
/*   Updated: 2018/08/30 21:27:14 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WORLD_HPP__
# define __WORLD_HPP__

# include "map.hpp"
# include "perso.hpp"

class World
{
	private:
		double const	_gravity;
		int				_check_gravity(void);
		int				_check_collision(void);

	public:
		Perso	perso;
		Map		maps;

		World(void);
		~World(void);

		void	print(void);
};

#endif