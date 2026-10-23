/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:18:41 by thtay             #+#    #+#             */
/*   Updated: 2026/10/22 14:18:43 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// std::cin >> x; saves only the first "word". 
// use std::getline(std::cin, x); to get the whole line :3

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Hello! Welcome to PhoneBook42!" << std::endl;

	//some more init
}

int	PhoneBook::Prompt()
{
	std::string input;
	std::string	inputUpper;
	
	std::cout << std::endl << "What do you want to do? ";
	std::cout << std::endl << "[ADD] [SEARCH] [EXIT]" << std::endl;
	
	while (std::getline(std::cin, input))
	{
		inputUpper = input;
		for(int i = 0; inputUpper[i]; i++)
			inputUpper[i] = static_cast<char>(std::toupper(inputUpper[i]));

		if (inputUpper == "ADD")
			;
		if (inputUpper == "SEARCH")	
			;
		if (inputUpper == "EXIT")
			break ;
	std::cout << std::endl << "What do you want to do? ";
	std::cout << std::endl << "[ADD] [SEARCH] [EXIT]" << std::endl;
	}
	return 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Exiting PhoneBook42. See you again soon~" << std::endl;
}

// Contact	PhoneBook::AddContact()
// {

// }

// Contact	PhoneBook::PopContact()
// {

// }

int	main()
{
	PhoneBook phbook;
	phbook.Prompt();
}
