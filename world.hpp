/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:11:06 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 19:36:32 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WORLD_HPP__
# define __WORLD_HPP__

#include <SDL.h>

class	World
{
	protected:
		int const		len;
		int	const		gravity;
		int const		size;
		int*			map;
		int				difficulty;
		SDL_Renderer*	render;

	public:
		World(void);
		~World(void);

		int		generate_map(int const difficulty);
		void	print(void);
		void	set_render_alias(SDL_Renderer* render);
};

#endif
