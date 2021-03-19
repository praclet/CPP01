/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:13:36 by praclet           #+#    #+#             */
/*   Updated: 2021/03/19 13:48:50 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Brain const & Human::getBrain(void) const
{
	return this->myBrain;
}

std::string Human::identify(void) const
{
	return this->myBrain.identify();
}
