/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:53 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/08 17:11:58 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string s1, std::string s2, std::string file)
{
	this->s1 = s1;
	this->s2 = s2;
	this->file = file;
}