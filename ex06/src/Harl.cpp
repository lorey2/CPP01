/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:13:16 by lorey             #+#    #+#             */
/*   Updated: 2025/05/05 15:38:53 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is constructed"
			  << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl is destructed"
			  << std::endl;
}

void 	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
			  << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
			  << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." 
			  << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
		if (level == levels[i])
			break;
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::debug();
			__attribute__((fallthrough));
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			Harl::info();
			__attribute__((fallthrough));
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			Harl::warning();
			__attribute__((fallthrough));
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			Harl::error();
			return ; 
	}
	std::cout << "Level not valid" << std::endl;
}

