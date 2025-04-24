/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:05:26 by lorey             #+#    #+#             */
/*   Updated: 2025/04/24 16:23:03 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Zombie has 
//	name
//	announce function

int	main(void)
{
	Zombie *z0;
	z0 = newZombie("IamNEWED");
	//we can access this zombie even if it has been created elsewhere
	z0->announce();
	randomChump("IamNOTnewd");
	//we cannot use this zombie in main
	delete(z0);
	return(0);
}
