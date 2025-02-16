/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:36:08 by lorey             #+#    #+#             */
/*   Updated: 2025/02/16 22:53:08 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::string level;

	if (argc != 2)
	{
		std::cout << "One arg is needed ./Harl_filter [DEBUG, INFO, WARNING , ERROR]"
			 << std::endl;
		return (1);
	}
	level = argv[1];
	Harl harl = Harl();
	harl.complain(level);
}
