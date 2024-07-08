/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:55:56 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/08 11:47:57 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*first;
	Zombie	*first_a = first->newZombie("Luca");
	Zombie	second;

	first_a->announce();
	second.randomChump("Tom");
	second.announce();
	delete first_a;
	return (0);
}