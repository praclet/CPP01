/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:00:19 by praclet           #+#    #+#             */
/*   Updated: 2021/03/19 13:41:39 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	whatever;
	public:
		Brain();
		std::string const & getWhatever(void) const;
		void setWhatever(std::string const wh);
		std::string identify(void) const;
};

#endif
