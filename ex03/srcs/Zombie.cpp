/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:07:12 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 16:12:58 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string const & nm, std::string const & tp) : name(nm), type(tp)
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

std::string const & Zombie::getName(void) const
{
	return (this->name);
};

void Zombie::setName(std::string const _name)
{
	this->name = _name;
};

std::string const & Zombie::getType(void) const
{
	return (this->type);
};

void Zombie::setType(std::string const _type)
{
	this->type = _type;
};
