/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:07:12 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 17:29:37 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string nm, std::string tp) : name(nm), type(tp)
{
};

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" ;
	std::cout << this->type << ")> *is dead. Well, dead again.";
	std::cout << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << this->name << " (" ;
	std::cout << this->type << ")> Braiiiiiiinnnssss...";
	std::cout << std::endl;
};
