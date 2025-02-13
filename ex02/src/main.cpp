/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:30:27 by lorey             #+#    #+#             */
/*   Updated: 2025/02/13 20:48:07 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "the memory address of string variable: "
		      << &string << std::endl;
	std::cout << "the memory address held by stringPTR: "
		      << stringPTR << std::endl;
	std::cout << "the memory address held by stringREF: "
		      << &stringREF << std::endl;
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
	std::cout << "the value of the string variable: "
		      << string << std::endl;
	std::cout << "the value pointed to by stringPTR: "
		      << *stringPTR << std::endl;
	std::cout << "the value pointed to by stringREF: "
		      << stringREF << std::endl;
}
