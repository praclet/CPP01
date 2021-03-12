/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:19:04 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 09:29:24 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony myPony;

	myPony.adequate_description = "That's a good boy! (Heap style.)";
	myPony.do_stuff(std::cout);
}

void ponyOnTheStack(void)
{
	Pony	*ptr;

	ptr = new Pony();
	ptr->adequate_description = "That's a good boy! (Stack style.)";
	ptr->do_stuff(std::cout);
	delete ptr;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
