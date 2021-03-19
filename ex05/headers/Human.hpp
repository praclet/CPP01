/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:13:46 by praclet           #+#    #+#             */
/*   Updated: 2021/03/19 13:41:31 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{
	private:
		Brain myBrain;
	public:
		Brain const & getBrain(void) const;
		std::string identify(void) const;
};

#endif
