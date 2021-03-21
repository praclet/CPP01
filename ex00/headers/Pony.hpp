/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:34:24 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 15:56:51 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
		std::string adequateDescription;
	public :
		void doStuff(std::ostream &os) const;
		void setAdequateDescription(std::string const & ad);
		std::string getAdequateDescription(void) const;
};

#endif
