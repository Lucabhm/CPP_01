/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:59:14 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/18 11:52:14 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = Zombie::zombieHorde(5, "Tom");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete[]	zombie;
	return (0);
}