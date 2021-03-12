/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 09:48:48 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 13:16:47 by praclet          ###   ########lyon.fr   */
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
		Zombie(std::string nm = "", std::string tp = "") : name(nm), type(tp)
		{
		};
		~Zombie()
		{
			std::cout << "<" << this->name << " (" ;
			std::cout << this->type << ")> *is dead. Well, dead again.";
			std::cout << std::endl;
		}
		void announce(void)
		{
			std::cout << "<" << this->name << " (" ;
			std::cout << this->type << ")> Braiiiiiiinnnssss...";
			std::cout << std::endl;
		};
};

#endif
