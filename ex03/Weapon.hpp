/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:18:26 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/08 16:20:17 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(){};
		Weapon(std::string newType): type(newType){};
		~Weapon(){};
		const std::string	&get_Type(void);
		void				setType(std::string type);
};

#endif