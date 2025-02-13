/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:14:10 by lorey             #+#    #+#             */
/*   Updated: 2025/02/13 19:47:36 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int n, std::string name )
{
	Zombie *horde;

	horde = new Zombie[n];
	for(int i = 0; i < n; i++)
	 	new (&horde[i]) Zombie(name);
	return (horde);
}
