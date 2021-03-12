/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:19:38 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 13:43:57 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie *randomChump()
{
	std::string names[]={"Adam", "Arthur", "Guillaume", 
		"Loïc", "Manon", "Pierre", "Simon"};
	std::string types[]={"fresh", "rotten", "festering", "newly dead"};
	(void)rand();
	Zombie	*res = new Zombie(names[rand() % 7], types[rand() % 4]);

	res->announce();
	return (res);
}

int main(void)
{
	srand(time(NULL));
	{
		Zombie	*ptr = randomChump();
		delete ptr;
	}
	{
		Zombie	z("Hugo", "delinquant");
		z.announce();
	}
	return (0);
}
