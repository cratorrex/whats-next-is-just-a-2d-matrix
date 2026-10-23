/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:18:48 by thtay             #+#    #+#             */
/*   Updated: 2026/10/22 14:18:49 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

//Array of Contact[8]
//pop oldest, insert new
//cannot be dynamically allocated
//Instantiates to EMPTY
class	PhoneBook
{
	private:
		Contact	contact[8];
		
	public:
		Contact	temp;

		PhoneBook();
		~PhoneBook();
		int	Prompt();
		//Contact	AddContact();
		//Contact	PopContact();
};

#endif
