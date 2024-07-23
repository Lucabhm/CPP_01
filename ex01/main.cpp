/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:59:14 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/23 09:43:00 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = zombie->zombieHorde(5, "Tom");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}