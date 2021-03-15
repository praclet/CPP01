/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:19:04 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 16:23:46 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony myPony;

	myPony.setAdequateDescription("That's a good boy! (Heap style.)");
	myPony.doStuff(std::cout);
}

void ponyOnTheStack(void)
{
	Pony	*ptr;

	ptr = new Pony();
	ptr->setAdequateDescription("That's a good boy! (Stack style.)");
	ptr->doStuff(std::cout);
	delete ptr;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
