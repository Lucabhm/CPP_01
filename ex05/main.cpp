/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:32:43 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 17:30:17 by lbohm            ###   ########.fr       */
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
