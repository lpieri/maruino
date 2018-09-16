/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicorn.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 20:08:42 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 16:30:29 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UNICORN_HPP__
# define __UNICORN_HPP__

# include "character.hpp"
# include "display.hpp"

class	Unicorn : public Character
{
	protected:
	public:
		Unicorn(void);
		~Unicorn(void);

		virtual void	sayHello(void) const;
		virtual void	attack(void);
		virtual void	print(void);
		virtual void	run(SDL_Event& event);
};

#endif
