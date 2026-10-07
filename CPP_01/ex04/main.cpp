/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:43:40 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 20:59:40 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

//string.erase and string.insert can act instead of replace, in that order

int main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		filestr;
	std::string		outname;
	std::string		str1;
	std::string		str2;
	size_t			pos = 0;

	if (argc != 4)
	{
		std::cout << "incorrect number of parameters! You need 3!" << std::endl;
		return 1;
	}
	infile.open(argv[1]);
	std::getline(infile, filestr, '\0');
	infile.close();
	str1 = argv[2];
	str2 = argv[3];
	while(filestr.find(str1) != std::string::npos)
	{
		pos = filestr.find(str1);
		filestr.erase(pos, str1.size());
		filestr.insert(pos, str2);
	}
	outname = argv[1];
	outname.append(".replace");
	outfile.open(outname.c_str());
	outfile.close();
	outfile << filestr;
	return 0;
}