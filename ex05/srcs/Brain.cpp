/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:54:45 by praclet           #+#    #+#             */
/*   Updated: 2021/03/19 13:48:29 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain () : whatever("Some neurons, synapses and stuff")
{
}

std::string Brain::identify(void) const
{
	std::stringstream tmp;
	
	tmp << "0x" << std::uppercase << std::hex << (long)this;
	return (tmp.str());
}

std::string const & Brain::getWhatever(void) const
{
	return (this->whatever);
}

void Brain::setWhatever(std::string const wh)
{
	this->whatever = wh;
}
