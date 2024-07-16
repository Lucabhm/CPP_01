/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:18:23 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 12:58:07 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::~Weapon(){}

Weapon::Weapon(std::string newType): type(newType){};

const std::string	&Weapon::get_Type(void){return (type);}

void	Weapon::setType(std::string type)
{
	this->type = type;
}