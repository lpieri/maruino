/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bobby.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:08:42 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 16:04:20 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MOLE_HPP__
# define __MOLE_HPP__

# include "character.hpp"
# include "display.hpp"

class	Mole : public Character
{
	protected:
	public:
		Mole(int x, int y);
		~Mole(void);

		virtual void	sayHello(void) const;
		virtual void	attack(void);
		virtual void	print(SDL_Renderer* render);
		virtual void	run(SDL_Event& event);
};

#endif
