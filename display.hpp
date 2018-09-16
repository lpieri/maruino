/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:09:37 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 16:11:39 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__DISPLAY_HPP__
# define __DISPLAY_HPP__

# include <string>
# include <SDL.h>

class	Display
{
	private:
		SDL_Window*		_win;
		SDL_Renderer*	_rend;
		int				_loop;

	public:
		SDL_Event		e;

		Display(std::string const & title, int x, int y);
		~Display(void);

		void			clear(void);
		SDL_Renderer*	get_render(void);
		int&			get_loop(void);
};

#endif
