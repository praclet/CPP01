/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:19:38 by praclet           #+#    #+#             */
/*   Updated: 2021/03/16 15:23:35 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
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
