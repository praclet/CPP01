/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:58:07 by praclet           #+#    #+#             */
/*   Updated: 2021/03/17 14:45:47 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <chrono>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string const tp) : type(tp)
{
};

void ZombieEvent::setZombieType(std::string const tp)
{
	this->type = tp;
};

Zombie* ZombieEvent::newZombie(std::string const name) const
{
	return (new Zombie(name, this->type));
};

Zombie	*ZombieEvent::randomChum(void) const
{
	std::string names[]={"Adam", "Arthur", "Astrid", "Emil", "Jean-Michel", "Guillaume", 
		"Loïc", "Manon", "Max", "Pierre", "Simon"};
	Zombie	*res;

	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
	res = new Zombie(names[std::rand() % 11], this->type);
	res->announce();
	return (res);
}
