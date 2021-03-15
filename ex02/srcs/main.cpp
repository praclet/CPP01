/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:19:38 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 17:18:26 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <chrono>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
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
