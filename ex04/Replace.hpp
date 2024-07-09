/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:06:58 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/09 08:37:08 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>


class	Replace
{
	private:
		std::string	file;
		std::string	s1;
		std::string	s2;
	public:
		Replace(std::string file, std::string s1, std::string s2);
		std::string	get_file(void);
		std::string	get_s1(void);
};

#endif