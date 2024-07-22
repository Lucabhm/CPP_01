/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:06:58 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/22 09:32:46 by lbohm            ###   ########.fr       */
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
		std::string		file;
		std::string		s1;
		std::string		s2;
	public:
		Replace(int argc, char **argv);
		~Replace();
		std::string	get_file(void);
		std::string	get_s1(void);
		std::string	get_s2(void);
};

#endif