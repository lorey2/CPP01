/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:15:45 by lorey             #+#    #+#             */
/*   Updated: 2025/02/13 19:16:52 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "Zooooom";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name
		      << ": BraiiiiiiinnnzzzZ... DELETED"
		      << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name
		      << ": BraiiiiiiinnnzzzZ..."
		      << std::endl;
}
