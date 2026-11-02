/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:09:52 by thtay             #+#    #+#             */
/*   Updated: 2026/10/23 17:09:53 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	sn = -1;
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact()
{

}

int		Contact::AddContact(int idx)
{
	Contact temp;

	std::cout << std::endl <<
	"Creating a Contact. Please enter text for the following fields."
	<< std::endl;

	std::cout << "First Name: ";
	if(!getline(std::cin, temp.firstName))
	{ std::cin.clear(); std::cout << std::endl; }
	
	std::cout << "Last Name: ";
	if(!getline(std::cin, temp.lastName))
	{ std::cin.clear(); std::cout << std::endl; }
	
	std::cout << "Nickname: ";
	if(!getline(std::cin, temp.nickName))
	{ std::cin.clear(); std::cout << std::endl; }
	
	std::cout << "Phone Number: ";
	if(!getline(std::cin, temp.phoneNumber))
	{ std::cin.clear(); std::cout << std::endl; }
	
	std::cout << "Darkest Secret: ";
	if(!getline(std::cin, temp.darkestSecret))
	{ std::cin.clear(); std::cout << std::endl; }
	

	if (temp.CheckFields())
	{
		sn = idx;
		firstName = temp.firstName;
		lastName = temp.lastName;
		nickName = temp.nickName;
		phoneNumber = temp.phoneNumber;
		darkestSecret = temp.darkestSecret;

		std::cout << std::endl <<
		"Successfully Created Contact in index [" << (sn - 1) % 8 + 1
		<< "]." << std::endl;
		return 1;
	}
	else
	{
		std::cout << std::endl <<
		"Empty field or Invalid Phone number detected. " << std::endl <<
		"Cancelling Contact Creation." << std::endl;
		return 0;
	}
}

void	Contact::ListContact()
{
	std::string	fields[4] = {firstName, lastName, nickName, phoneNumber};
	if (sn > -1)
	{
		std::cout << "|[" << ((sn - 1) % 8 + 1) << "]|";
		for (int i = 0; i < 4; i++)
		{
			if (fields[i].length() <= 10)
				std::cout << "|" << std::setw(10) << fields[i] << "|";
			else
			{
				std::cout << "|";
				for (int j = 0; j < 9; j++)
					std::cout << fields[i][j];
				std::cout << ".|";
			}
		}
		std::cout << std::endl;
	}
}

void	Contact::DisplayContact()
{
	std::cout << std::endl << "Displaying Contact Details:" << std::endl
	<< "First Name: " << firstName << std::endl
	<< "Last Name: " << lastName << std::endl
	<< "Nickname: " << nickName << std::endl
	<< "Phone Number: " << phoneNumber << std::endl
	<< "Darkest Secret: " << darkestSecret << std::endl;
}

int		Contact::CheckFields()
{
	return (!(firstName.length() == 0 || lastName.length() == 0
			|| nickName.length() == 0 || darkestSecret.length() == 0
			|| phoneNumber.length() == 0
			|| !phoneNumber.find_first_not_of("0123456789()+-")));
}