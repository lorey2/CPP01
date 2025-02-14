/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:29:13 by lorey             #+#    #+#             */
/*   Updated: 2025/02/14 13:52:13 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	_type = "bat";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called from [Weapon]" << std::endl;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType(void)
{
	return (_type);
}
