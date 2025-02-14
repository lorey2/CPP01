/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <loic.rey.vs@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:30:22 by lorey             #+#    #+#             */
/*   Updated: 2025/02/14 16:17:50 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>

void replace(std::string *to_replace, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    std::string result;
    pos = to_replace->find(s1, pos);
    while (pos != std::string::npos) {
        result.append(to_replace->substr(0, pos));
        result.append(s2);
        pos += s1.length();
        *to_replace = to_replace->substr(pos);
        pos = to_replace->find(s1, 0);
    }
    result.append(*to_replace);
    *to_replace = result;
}
int	main(int argc, char **argv)
{
	std::string	filename_in;
	std::string	filename_out;
	std::string	s1;
	std::string	s2;
	std::string line;

	if (argc != 4)
		std::cout << "Wrong arg number [filename] [to_replace] [replaced]" << std::endl;
	filename_in = argv[1];
	filename_out = filename_in + ".replace";
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream inputFile(filename_in.c_str());
	if (!inputFile)
		std::cout << "Unable to open file: "
				  << filename_in
			      << " for reading"
				  << std::endl;
	std::ofstream outputFile(filename_out.c_str());
	if (!outputFile)
		std::cout << "Unable to open file: "
				  << filename_out
			      << " for writing"
				  << std::endl;
	while (std::getline(inputFile, line))
	{
		replace(&line, s1, s2);
		outputFile << line << std::endl;
//		UNCOMMENT THAT TO HAVE OUTPUT IN TERMINAL TOO
//		std::cout << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
