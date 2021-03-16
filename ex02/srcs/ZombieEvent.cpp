/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:58:07 by praclet           #+#    #+#             */
/*   Updated: 2021/03/16 15:23:25 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <chrono>
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
	std::string names[]={"Adam", "Arthur", "Astrid", "Emil", "Jean-Michel", "Guillaume", 
		"Loïc", "Manon", "Max", "Pierre", "Simon"};
	Zombie	*res;

	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
	res = new Zombie(names[std::rand() % 9], this->type);
	res->announce();
	return (res);
}
