/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:59:14 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/16 12:26:41 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	Zombie	*zombie2;

	zombie2 = zombie->zombieHorde(5, "Tom");
	for (int i = 0; i < 5; i++)
		zombie2[i].announce();
	delete[]	zombie2;
	return (0);
}