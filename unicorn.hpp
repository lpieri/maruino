/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:37:59 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 11:37:54 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __UNICORN_HPP__
# define __UNICORN_HPP__

# include "character.hpp"
# include "macro.hpp"
# include "image.hpp"

class Unicorn : public Character
{
	private:
		int const		_damages;
		int const		_speed;

	public:
		Unicorn(void);
		~Unicorn(void);

		void	sayHello(void) const;
		void	print(void);
		void	run(int& map_starter);
		void	moveBack(int& map_starter);
};

#endif