/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:25:20 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 18:22:48 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"

Character::Character(int damage, int size) : size(size), damage(damage), pos(0, 0)
{
	std::cout << "I born in this fucking world" << std::endl;
}

Character::~Character(void)
{
	std::cout << "I'm dead oh it's so sad" << std::endl;
}

void	Character::set_render_alias(SDL_Renderer* render)
{
	this->render = render;
}

void	Character::sayHello(void)
{
	std::cout << "Hello I'm a lambda character" << std::endl;
}

void	Character::attack(void)
{
	return ;
}

void	Character::run(SDL_Event& event)
{
	return ;
}

void	Character::jump(void)
{
	return ;
}

void	Character::print(void)
{
	return ;
}
