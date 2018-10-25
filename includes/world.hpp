/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   world.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 12:45:53 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 09:59:56 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __WORLD_HPP__
# define __WORLD_HPP__

# include "map.hpp"
# include "character.hpp"
# include "image.hpp"
# include "bad.hpp"
# include <Gamebuino-Meta.h>

class World
{
	private:
		int const	_gravity;
		int			_nb_bad;
		Character *	_character;
		Map * 		_maps;
		Bad *		_the_bad;

		void		_set_gravity(void);
		void		_check_colision(void);
		void		_the_end(char const * text);

	public:
		World(Character* character, Map* maps);
		~World(void);

		void	print_sky(void) const;
		void	add_physical(void);
		void	restart_game(void);
		void	check_end(void);
		void	start_game(void);
};

#endif