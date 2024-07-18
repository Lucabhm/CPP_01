/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:55:56 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/18 11:48:30 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*first;
	Zombie	second;

	first = Zombie::newZombie("Luca");
	second.randomChump("Tom");
	first->announce();
	second.announce();
	delete first;
	return (0);
}