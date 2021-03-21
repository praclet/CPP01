/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 09:15:16 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 10:59:27 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string const & nm) : name(nm)
{
}

void HumanB::attack(void) const
{
	std::cout << this->name << " attacks with his "
		<< this->myWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon const & wp)
{
	this->myWeapon = &wp;
}
