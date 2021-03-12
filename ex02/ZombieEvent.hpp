/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:08:10 by praclet           #+#    #+#             */
/*   Updated: 2021/03/12 12:41:52 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string	type;
	public:
		ZombieEvent(std::string tp="") : type(tp)
		{
		};
		void setZombieType(std::string tp)
		{
			this->type = tp;
		};
		Zombie* newZombie(std::string name)
		{
			return (new Zombie(name, this->type));
		};
};

#endif
