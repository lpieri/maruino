/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:37:59 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/09/21 16:09:44 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __UNICORN_HPP__
# define __UNICORN_HPP__

# include "character.hpp"
// # include "image.hpp"

class Unicorn : public Character
{
	private:
		Image&			_skin;
		int const		damages;
		int const		speed;

	public:
		Unicorn(Image& image);
		~Unicorn(void);

		void	sayHello(void) const;
		void	print(void);
		void	run(int& map_starter);
		void	moveBack(int& map_starter);
};

#endif