/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:58:07 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 14:09:27 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie	*ZombieEvent::randomChum(void)
{
	std::string names[]={"Adam", "Arthur", "Guillaume", 
		"Loïc", "Manon", "Pierre", "Simon"};
	Zombie	*res = new Zombie(names[std::rand() % 7], this->type);

	res->announce();
	return (res);
}
