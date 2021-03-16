/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:07:12 by praclet           #+#    #+#             */
/*   Updated: 2021/03/16 15:23:45 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

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
