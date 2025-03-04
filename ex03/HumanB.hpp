/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:18:31 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 13:10:32 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		HumanB(std::string newName);
		HumanB(std::string newName, Weapon &newType);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &newType);
};

#endif