/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:22:47 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 11:00:10 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const & tp) : type(tp)
{
}

std::string const & Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string const & type)
{
	this->type = type;
}
