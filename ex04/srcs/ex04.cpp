/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:20:16 by praclet           #+#    #+#             */
/*   Updated: 2021/03/17 15:51:30 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*ptr_str = &str;
	std::string	&ref_str = str;

	std::cout << std::setw(10) << "str" << ": " << str << std::endl;
	std::cout << std::setw(10) << "ptr_str" << ": " << *ptr_str << std::endl;
	std::cout << std::setw(10) << "ref_str" << ": " << ref_str << std::endl;
}
