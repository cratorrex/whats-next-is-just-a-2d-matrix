/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seed.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:58:25 by thtay             #+#    #+#             */
/*   Updated: 2026/11/11 16:59:52 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seed.hpp"

/* Seed::Seed()
{
	//inFD
	outFD.open("STDOUT.replace", std::ios::out); 
	//create a new file "STDOUT.replace"
}
 */

//inFD = open file from filename
//outFD = create a new file based on filename "filename.replace"
Seed::Seed(std::string filename)
{
	std::cout << "// SED FOR LOSERS //" << std::endl <<
	"Opening <" << filename << ">..." << std::endl;

	inFD.open(filename.c_str(), std::ios::in);
	if (inFD.is_open())
	{
		std::cout << "Initializing Replace file <" <<
		filename.append(".replace") << ">..." << std::endl;
		outFD.open(filename.c_str(), std::ios::out);

		if (outFD.is_open())
			std::cout << "Successfully initialized." << std::endl;
		else 
			std::cout << "Initialization Error..." << std::endl;

	}
	else 
		std::cout << "Initialization Error..." << std::endl;
}

Seed::~Seed()
{
	std::cout << std::endl << "// Seedling out! //" << std::endl;
}

int		Seed::isOpen()
{
	return (inFD.is_open() && outFD.is_open());
}


//this function basically reads from the infd, does the replacing without
//string::replace, and then writes it to outfd
void	Seed::replace(std::string s1, std::string s2)
{
	std::string		rep;
	char			bit;
	unsigned int	fi = 0, repl = 0;
	int				size1 = s1.length(), size2 = s2.length();

	std::cout << std::endl << "Checking for replacements..." << std::endl;
	
	while (inFD.get(bit))
		rep.append(1, bit);

	while (rep.find(s1, fi) < rep.length())
	{
		fi = rep.find(s1, fi);
		rep.erase(fi, size1);
		rep.insert(fi, s2);
		fi += size2;
		repl++;
	}
	
	std::cout << std::endl <<
	"Replacements Done: " << repl << std::endl;
	outFD << rep;
}

/*
a very stupid idea: 
given "stringggggg" s1 = string; s2 = strin;...
return "strin";

//no this is not what i'm gonna submit but if i'm doing
the "loser" approach, why not?//
*/
