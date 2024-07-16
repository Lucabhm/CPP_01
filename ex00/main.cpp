/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:55:56 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 11:10:24 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*first;
	Zombie	second;

	first = second.newZombie("Luca");
	second.randomChump("Tom");
	first->announce();
	second.announce();
	delete first;
	return (0);
}