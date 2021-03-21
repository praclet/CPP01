/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:22:47 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 09:38:02 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const & Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string const & type)
{
	this->type = type;
}
