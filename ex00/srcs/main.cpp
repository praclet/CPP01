/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:19:04 by praclet           #+#    #+#             */
/*   Updated: 2021/03/17 14:41:01 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony myPony;

	myPony.setAdequateDescription("That's a good boy! (Stack style.)");
	myPony.doStuff(std::cout);
}

void ponyOnTheHeap(void)
{
	Pony	*ptr;

	ptr = new Pony();
	ptr->setAdequateDescription("That's a good boy! (Heap style.)");
	ptr->doStuff(std::cout);
	delete ptr;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
