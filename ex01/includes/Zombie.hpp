/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:16:13 by lorey             #+#    #+#             */
/*   Updated: 2025/02/13 19:17:52 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);	
};

Zombie*	zombieHorde( int N, std::string name );

#endif
