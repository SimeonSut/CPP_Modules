/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:43:40 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/08 14:53:42 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void CPP_sed(std::string str1, std::string str2, std::string filestr, char **argv)
{
	size_t			pos = 0;
	std::string		outname;
	std::ofstream	outfile;

	while(str1.compare(str2.c_str()) != 0 && filestr.find(str1) != std::string::npos)
	{
		pos = filestr.find(str1);
		filestr.erase(pos, str1.size());
		filestr.insert(pos, str2);
	}
	outname = argv[1];
	outname.append(".replace");
	outfile.open(outname.c_str());
	if (outfile.is_open() == false)
	{
		std::cout << ".replace file opening error ! Nice try tho.. :)" << std::endl;
	}
	outfile << filestr;
	outfile.close();
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::string		filestr;
	std::string		str1;
	std::string		str2;

	if (argc != 4)
	{
		std::cout << "incorrect number of parameters! You need 3!" << std::endl;
		return 1;
	}
	str1 = argv[2];
	str2 = argv[3];
	infile.open(argv[1]);
	if (infile.is_open() == false)
	{
		infile.close();
		std::cout << "Input file opening error! Check input and/or file permissions!" << std::endl;
		return 1;
	}
	if (infile.rdbuf()->in_avail() == 0)
	{
		infile.close();
		std::cout << "Empty file! Nothing to copy!" << std::endl;
		return 1;
	}
	std::getline(infile, filestr, '\0');
	infile.close();
	CPP_sed(str1, str2, filestr, argv);
	return 0;
}