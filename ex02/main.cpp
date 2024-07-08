/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:49:05 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/08 15:04:18 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	value = "HI THIS IS BRAIN";
	std::string	*stringPTR = &value;
	std::string	&stringREF = value;

	std::cout << "The memory address of the string variable = " << &value << std::endl;
	std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;
	std::cout << "The value of the string variable = " << value << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	return (0);
}
