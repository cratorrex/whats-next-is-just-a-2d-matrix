/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:50:52 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 19:50:53 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string giveName)
{
	name = giveName;
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon& neWeapon)
{
	weapon = &neWeapon;
	std::cout << name << " picks up a " << weapon->getType() << std::endl;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() <<
	std::endl;
}
