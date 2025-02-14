/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:51:38 by lorey             #+#    #+#             */
/*   Updated: 2025/02/14 02:55:06 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called from [HumanB]" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << _name
			  << ": Attacked with: "
			  << _w1.getType();
}
