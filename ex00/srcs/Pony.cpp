/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:47:30 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 16:24:19 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void Pony::doStuff(std::ostream& os) const
{
	os << "I'm a pony!" << std::endl;
	os << "My adequate description is: "
		<< this->adequateDescription << std::endl;
	os << "Look, Ma! I'm doing stuff!" << std::endl;
}

void Pony::setAdequateDescription(std::string ad)
{
	this->adequateDescription = ad;
}

std::string Pony::getAdequateDescription(void) const
{
	return this->adequateDescription;
}
