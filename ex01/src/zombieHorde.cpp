/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:14:10 by lorey             #+#    #+#             */
/*   Updated: 2025/04/24 16:45:28 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int n, std::string name )
{
	Zombie *horde;

	horde = new Zombie[n];
	for(int i = 0; i < n; i++)
	 	horde[i] = Zombie(name);
	//here we create temporarry Zombies. When the go out of scope, the destructor is called
	//we could use a set name to avoid that but it would be modifing the zombie class.
	//(wich is not what we want even if not forbidden)
	//the problem is that with Zombie[] the constructor is not called
	return (horde);
}
