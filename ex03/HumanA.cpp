/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:18:39 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 16:25:40 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(){}

HumanA::HumanA(std::string newName, Weapon &type): name(newName), weapon(type){}

void	HumanA::attack(void)
{
	if (weapon.get_Type().empty())
		std::cout << name << " attacks with their hands" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon.get_Type() << std::endl;
}