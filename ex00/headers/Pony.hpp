/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:34:24 by praclet           #+#    #+#             */
/*   Updated: 2021/03/15 16:23:40 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony {
		std::string adequateDescription;
	public :
		void doStuff(std::ostream &os) const;
		void setAdequateDescription(std::string ad);
		std::string getAdequateDescription(void) const;
};

#endif
