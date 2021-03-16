/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 09:48:48 by praclet           #+#    #+#             */
/*   Updated: 2021/03/16 15:21:53 by praclet          ###   ########lyon.fr   */
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
		};
		void announce(void)
		{
			std::cout << "<" << this->name << " (" ;
			std::cout << this->type << ")> Braiiiiiiinnnssss...";
			std::cout << std::endl;
		};
};

#endif


/*



Zombie	*ZombieEvent::ZombieEvent::randomChum(void) const
{
	std::string names[]={"Adam", "Arthur", "Astrid", "Emil", "Jean-Michel", "Guillaume", 
		"Loïc", "Manon", "Max", "Pierre", "Simon"};
	Zombie	*res;

	std::srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
	res = new Zombie(names[std::rand() % 9], this->type);
	res->announce();
	return (res);
}
