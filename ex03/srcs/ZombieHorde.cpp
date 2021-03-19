/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:06:09 by praclet           #+#    #+#             */
/*   Updated: 2021/03/19 11:14:08 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nb) : nbZombie(nb)
{
	std::string names[]={"Adam", "Arthur", "Astrid", "Emil", "Jean-Michel", "Guillaume", 
		"Loïc", "Manon", "Max", "Pierre", "Simon"};

	this->tab = new Zombie[nb];
	if (!this->tab)
	{
		this->nbZombie = 0;
		return ;
	}
	for (int i=0; i < this->nbZombie; i++)
	{
		this->tab[i].setName(names[rand()%11]);
		this->tab[i].setType("festering");
	}	
}

ZombieHorde::~ZombieHorde()
{
	delete [] tab;
}

void ZombieHorde::announce(void) const
{
	for (int i=0; i < this->nbZombie; i++)
		this->tab[i].announce();
}	
