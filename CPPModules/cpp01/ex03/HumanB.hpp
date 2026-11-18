/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:50:47 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 19:50:48 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB();
		HumanB(std::string giveName);
		~HumanB();
		void		attack();
		void		setWeapon(Weapon& neWeapon);
};

#endif
