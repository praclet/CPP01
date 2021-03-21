/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:32:30 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 10:57:51 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string const & nm, Weapon const & wp) : name(nm), myWeapon(wp)
{
}

void HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his "
		<< this->myWeapon.getType() << std::endl;
}
