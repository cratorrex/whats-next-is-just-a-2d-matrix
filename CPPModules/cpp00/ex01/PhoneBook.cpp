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
	ContactsAdded = 0;
}

int	PhoneBook::Prompt()
{
	int			counter = 0;
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
		{	
			if (contact[ContactsAdded % 8].AddContact(ContactsAdded + 1))
				ContactsAdded = (ContactsAdded + 1);
		}
		else if (inputUpper == "SEARCH")
			ListContacts();
		else if (inputUpper == "EXIT")
			break ;
		else
			continue ;
		std::cout << std::endl << "What do you want to do?"
		<< std::endl << "[ADD] [SEARCH] [EXIT]" << std::endl;
	}
	return 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Exiting PhoneBook42. See you again soon~" << std::endl;
}

void	PhoneBook::ListContacts()
{
	std::string choice;
	
	std::cout << std::endl << "|S/N|" << "|First Name|" 
	<< "| Last Name|" << "|  Nickname|" << "| Phone Num|" << std::endl;
	for (int i = 0; i < 8; i++)
		contact[i].ListContact();
	std::cout << std::endl << "Please choose a contact to display."
	<< std::endl << "S/N: ";
	std::getline(std::cin, choice);
	if (choice.length() == 1 && choice[0] > '0' && choice[0] <= '8'
		&& contact[choice[0] - 1 - '0'].sn >= 0)
		contact[choice[0] - 1 - '0'].DisplayContact();
	else
		std::cout << "Invalid Contact S/N Chosen." << std::endl;
}

int	main()
{
	PhoneBook phbook;
	phbook.Prompt();
}

/* void	PhoneBook::Hello(int i)
{
	switch (i)
	{
		case 2: 
			std::cout << "What do you want to do?" << std::endl;
			break;
		case 4: 
			std::cout << "What do you want to do?" << std::endl;
			break;
		case 6:
			std::cout << "Uhh... Mate, are you good there?" << std::endl;
			break;
		case 7:
			std::cout << "Couldn't help but notice that you're not giving "
			<< "me valid options..." << std::endl;
			break;
		case 10:
			std::cout << "You know you aren't in the shell right?"
			<< std::endl;
			break;
		case 11:
			std::cout << "I hope you are aware at least..." << std::endl;
			break;
		case 15:
			std::cout << "At this point I'm going to assume you're just "
			<< "holding the Enter key." << std::endl;
			break;
		case 17:
			std::cout << "Or did you doze off?" << std::endl;
			break;
		case 19:
			std::cout << "WAKE UP MAN!!! IT'S HALF PAST TWELVE!!!"
			<< std::endl;
			break;
		case 20:
			std::cout << "well, that's 100 times you've given an invalid "
			<< "option..." << std::endl;
			break;
		case 21:
			std::cout << "yes i've been keeping count... why you ask?"
			<< std::endl;
			break;
		case 40:
			std::cout << "Sorry for the prolonged absence... Good news, "
			<< "you gave me 200 invalid options so far!" << std::endl;
			break;
		case 41:
			std::cout << "Yeah, I got bored, but peeps told me I could use "
			<< "switch cases, now that there is no more Norminette."
			<< std::endl;
			break;
	}
}
 */
