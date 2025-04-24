/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:13:16 by lorey             #+#    #+#             */
/*   Updated: 2025/04/24 18:54:44 by lorey            ###   LAUSANNE.ch       */
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
	//we store the level with correct index
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//we store the member functions with correct index
	//Harl::*fun[4])()
	//		fun[4] is just an array
	//		Harl::* says that it is an array of pointer to Harl member functions
	//		() is the place where we normally put argument
	void (Harl::*fun[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		//we compare the input with the array
		if (level == levels[i])
		{
			//we launch the function with the correct index
			(this->*fun[i])();
			return;
		}
	}
	std::cout << "Level not valid" << std::endl;
}

