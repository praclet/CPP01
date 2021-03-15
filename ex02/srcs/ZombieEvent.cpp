/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:58:07 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 17:29:01 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string tp) : type(tp)
{
};

void ZombieEvent::setZombieType(std::string tp)
{
	this->type = tp;
};

Zombie* ZombieEvent::newZombie(std::string name) const
{
	return (new Zombie(name, this->type));
};

Zombie	*ZombieEvent::ZombieEvent::randomChum(void) const
{
	std::string names[]={"Adam", "Arthur", "Astrid", "Jean-Michel", "Guillaume", 
		"Loïc", "Manon", "Pierre", "Simon"};
	Zombie	*res = new Zombie(names[std::rand() % 7], this->type);

	res->announce();
	return (res);
}
