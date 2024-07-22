/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:32:47 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/22 09:50:49 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl \
	<< "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl \
	<< "You didn’t put enough bacon in my burger!" << std::endl \
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl \
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl \
	<< "I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*test[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	value[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl	person;
	int		i;

	for (i = 0; i < 4; i++)
	{
		if (!value[i].compare(level))
			break ;
	}
	if (i == 4)
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		std::exit(1);
	}
	(person.*test[i])();
}