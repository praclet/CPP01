/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:32:30 by praclet           #+#    #+#             */
/*   Updated: 2021/03/19 16:01:43 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &myWeapon;
	public:
		HumanA(std::string nm, Weapon &wp);
		void attack(void);
};

#endif
