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
	std::cout << std::endl << "What do you want to do? ";
	std::cout << "Writing multiple words will only retrieve the first!";
	std::cout << std::endl << "[ADD] [SEARCH] [EXIT]" << std::endl;

	//some more init
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
	std::string x;
	PhoneBook phbook;
	
	while (1)
	{
		std::cin >> x;

		if (x == "exit")
			break ;
		std::cout << x << std::endl;
	}
}
