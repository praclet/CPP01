/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:08:10 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 16:01:44 by praclet          ###   ########lyon.fr   */
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
		ZombieEvent(std::string const & tp="");
		void setZombieType(std::string const & tp);
		Zombie* newZombie(std::string const & name) const;
		Zombie* randomChum() const;
};

#endif
