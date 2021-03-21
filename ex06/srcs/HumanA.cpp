/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:32:30 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 09:27:02 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanaA.hpp"

HumanA::HumanA(std::string nm, Weapon &wp) : name(nm), myWeapon(wp)
{
}

void HumanA::attack(void)
{
	std::cout << NAME << " attacks with his " << WEAPON_TYPE;
}
