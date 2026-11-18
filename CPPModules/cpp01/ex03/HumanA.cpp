/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:50:34 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 19:50:36 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string giveName, Weapon &arms) : weapon(arms)
{
	name = giveName;
	std::cout << name << " has been armed with a " << weapon.getType() <<
	std::endl;
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() <<
	std::endl;
}
