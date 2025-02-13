/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:23:27 by lorey             #+#    #+#             */
/*   Updated: 2025/02/13 19:47:51 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int	main(void)
{
	Zombie *horde;

	horde = zombieHorde(4, "we are legion");

	for (int i = 0; i < 4; i++)
	{
		std::cout << "zombie number : " << i
			      << " zombie annonce: ";
		horde[i].announce();
	}
	delete[] horde;

}
