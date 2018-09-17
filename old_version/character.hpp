/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:22:51 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 19:54:25 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <SDL.h>
# include <iostream>
# include "vector.hpp"

class	Character
{
	protected:
		int const		damage;
		int	const		size;
		Vector2d		pos;
		SDL_Renderer*	render;

	public:
		Character(int damage, int size);
		~Character(void);

		void			set_render_alias(SDL_Renderer* render);
		virtual	void	moveBack(void);
		virtual void	sayHello(void);
		virtual void	attack(void);
		virtual void	run(SDL_Event& event);
		virtual void	jump(void);
		virtual void	print(void);
};

#endif
