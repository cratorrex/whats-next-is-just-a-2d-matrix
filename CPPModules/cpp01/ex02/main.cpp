/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:23:14 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 18:23:15 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "MEMORY ADDRESS" << std::endl << "String   : " << &brain <<
	std::endl << "Pointer  : " << stringPTR <<
	std::endl << "Reference: " << &stringREF << std::endl <<
	"-------------------------------------" <<
	std::endl << "STRING VALUE" <<
	std::endl << "String   : " << brain << std::endl <<
	"Pointer  : " << *stringPTR << std::endl << "Reference: " << stringREF <<
	std::endl;
}
