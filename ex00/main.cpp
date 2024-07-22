/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:55:56 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/22 11:00:49 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*first;
	Zombie	second;

	first = first->newZombie("Luca");
	second.randomChump("Tom");
	first->announce();
	second.announce();
	delete first;
	return (0);
}