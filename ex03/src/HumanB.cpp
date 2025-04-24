/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:51:38 by lorey             #+#    #+#             */
/*   Updated: 2025/04/24 17:08:56 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_w1 = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called from [HumanB]" << std::endl;
}

void	HumanB::attack(void)
{
	//as _w1 is a pointer, it can be NULL, which is what we want to check here
	if (_w1 == NULL)
		std::cout << "[HumanB] :"
				  << _name
				  << "has no weapon"
				  << std::endl;
	else
		std::cout << _name
				  << ": Attacked with: "
				  << _w1->getType()
		    	  << std::endl;
}

void	HumanB::setWeapon(Weapon &w2)
{
	_w1 = &w2;
}
