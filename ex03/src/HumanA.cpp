/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:35:18 by lorey             #+#    #+#             */
/*   Updated: 2025/02/14 02:49:08 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon w1)
{
	_name = name;
	_w1 = w1;	
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called from [HumanA]" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name
			  << ": Attacked with: "
			  << _w1.getType();
}
