/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:18:34 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/08 16:55:31 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName, Weapon &newType)
{
	name = newName;
	weapon = &newType;
}

void	HumanB::setWeapon(Weapon &newType)
{
	weapon = &newType;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->get_Type() << std::endl;
}