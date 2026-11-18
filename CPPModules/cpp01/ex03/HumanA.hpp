/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:50:40 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 19:50:41 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;

	public:
		HumanA(std::string giveName, Weapon &arms);
		~HumanA();
		void		attack();
};

#endif
