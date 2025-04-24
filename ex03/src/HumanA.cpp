/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:35:18 by lorey             #+#    #+#             */
/*   Updated: 2025/04/24 17:07:50 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &w1) : _name(name), _w1(w1)
{
	//w1 is a reference. Basically you can do the same things with this as a pointer but it cannot be set to null
	//so if the HumanA as no weapon at a time, it will be an issue
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called from [HumanA]" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name
			  << ": Attacked with: "
			  << _w1.getType()
			  << std::endl;
}
