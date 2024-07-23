/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:32:47 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/23 12:25:13 by lbohm            ###   ########.fr       */
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
	typedef void (Harl::*test)(void);
	std::map<std::string, test>				map;
	std::map<std::string, test>::iterator	i;

	map["DEBUG"] = &Harl::debug;
	map["INFO"] = &Harl::info;
	map["WARNING"] = &Harl::warning;
	map["ERROR"] = &Harl::error;
	i = map.find(level);
	if (i != map.end())
		(this->*(i->second))();
	else
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		std::exit(1);
	}
}