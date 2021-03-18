/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:26:25 by praclet           #+#    #+#             */
/*   Updated: 2021/03/17 17:26:55 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

class ZombieHorde
{
	private:
		int		nbZombie;
		Zombie	*tab;
	public:
		ZombieHorde(int nb);
		~ZombieHorde();
};

#endif
