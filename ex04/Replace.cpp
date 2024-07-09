/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:53 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/09 08:37:28 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string file, std::string s1, std::string s2)
{
	this->file = file;
	this->s1 = s1;
	this->s2 = s2;
}

std::string	Replace::get_file(void){return (file);}

std::string	Replace::get_s1(void){return (s1);}
