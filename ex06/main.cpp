/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:10:50 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 17:29:00 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	person;

	if (argc == 2)
		person.complain(argv[1]);
	else
	{
		std::cerr << "Worng args" << std::endl;
		std::exit(1);
	}
	return (0);
}
