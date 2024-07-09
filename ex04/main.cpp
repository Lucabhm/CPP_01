/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:02:31 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/09 08:40:40 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		Replace	input(argv[1], argv[2], argv[3]);
		std::ifstream	fd(input.get_file());
		if (fd.is_open())
		{
			std::string	line;
			int			pos;
			while (std::getline(fd, line))
			{
				pos = line.find(input.get_s1());
				if (pos != std::string::npos)
				{
					
				}
			}
		}
	}
	else
		std::cout << "Wrong nbr of Args" << std::endl;
}
