/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:06:58 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/08 17:10:37 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>

class	Replace
{
	private:
		std::string	s1;
		std::string	s2;
		std::string	file;
	public:
		Replace(std::string s1, std::string s2, std::string file);
};

#endif