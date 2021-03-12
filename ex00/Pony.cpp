/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:47:30 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 09:11:16 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Pony.hpp"

void Pony::do_stuff(std::ostream& os)
{
	os << "I'm a pony!" << std::endl;
	os << "My adequate description is: "
		<< this->adequate_description << std::endl;
	os << "Look Ma! I'm doing stuff!" << std::endl;
}
