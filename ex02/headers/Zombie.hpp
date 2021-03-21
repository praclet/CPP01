/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 09:48:48 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 16:07:50 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(std::string const & nm = "", std::string const & tp = "");
		~Zombie();
		void announce(void) const;
		std::string const & getName(void) const;
		void setName(std::string const);
		std::string const & getType(void) const;
		void setType(std::string const);
};

#endif
