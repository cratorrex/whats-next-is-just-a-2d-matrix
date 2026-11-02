/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:09:54 by thtay             #+#    #+#             */
/*   Updated: 2026/10/23 17:09:57 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#ifdef PHONEBOOK_HPP
# ifndef CONTACT_HPP
#  define CONTACT_HPP

//Contact in PhoneBook
class	Contact
{
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		phoneNumber;
		std::string		darkestSecret;
		int				CheckFields();
	
	public:
		int		sn;
		Contact();
		~Contact();
		int		AddContact(int idx);
		void	ListContact();
		void	DisplayContact();
};

# endif
#endif
