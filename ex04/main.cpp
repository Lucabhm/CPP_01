/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:02:31 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/22 09:33:24 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	Replace	input(argc, argv);
	std::ifstream	fd(input.get_file());
	if (fd.is_open())
	{
		std::ofstream	out(input.get_file().append(".replace"));
		std::string	line;
		int			pos;
		while (std::getline(fd, line))
		{
			pos = line.find(input.get_s1());
			if (pos != std::string::npos)
				line.replace(pos, input.get_s1().length(), input.get_s2());
			out << line << std::endl;
		}
	}
	else
	{
		std::cerr << "Open failed" << std::endl;
		std::exit(1);
	}
	return (0);
}
