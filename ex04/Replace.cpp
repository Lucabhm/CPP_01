/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:53 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 15:20:54 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(int argc, char **argv)
{
	if (argc == 4)
	{
		file = argv[1];
		s1 = argv[2];
		s2 = argv[3];
	}
	else
	{
		std::cerr << "Wrong nbr of Args" << std::endl;
		std::exit(1);
	}
}

Replace::~Replace(){}

std::string	Replace::get_file(void){return (file);}

std::string	Replace::get_s1(void){return (s1);}

std::string	Replace::get_s2(void){return (s2);}