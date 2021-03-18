/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:06:09 by praclet           #+#    #+#             */
/*   Updated: 2021/03/17 17:25:29 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nb) : nbZombie(nb)
{
	this->tab = new Zombie[nb];
	if (!this->tab)
	{
		this->nbZombie = 0;
		return ;
	}
	;
}

ZombieHorde::~ZombieHorde()
{
	delete [] tab;
}
