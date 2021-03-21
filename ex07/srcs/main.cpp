/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praclet <praclet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:46:54 by praclet           #+#    #+#             */
/*   Updated: 2021/03/21 16:42:32 by praclet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void usage(void)
{
	std::cout << "USAGE : replace FILENAME TEXT_TO_REPLACE REPLACING_TEXT"
		<< std::endl;
}

int main(int argc, char *argv[])
{
	if (argc != 4 || !strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3]))
	{
		usage();
		return (1);
	}

	std::string fileName(argv[1]);
	std::ifstream file1(fileName);
	if (!file1)
	{
		usage();
		return (2);
	}

	std::ofstream file2(fileName + ".replace");
	if (!file2)
	{
		usage();
		return (2);
	}

	std::string txtin(argv[2]);
	std::string txtout(argv[3]);
	std::string s;
	while (getline(file1, s))
	{
		for (std::size_t p = s.find(txtin); p != std::string::npos;
				p = s.find(txtin, p + txtout.length()))
			s.replace(p, txtin.length(), txtout);
		file2 << s << std::endl;
	}

	return (0);
}
