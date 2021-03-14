/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:19:38 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 14:10:54 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	std::srand(std::time(nullptr));
	{
		ZombieEvent	ze;
		Zombie	*ptr;

		ze.setZombieType("festering");
		ptr = ze.randomChum();
		delete ptr;
	}
	{
		Zombie	z("Hugo", "delinquant");
		z.announce();
	}
	return (0);
}
