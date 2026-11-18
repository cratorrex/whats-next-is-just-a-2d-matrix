/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:51:33 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 19:51:34 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "bare fists, as they do not have a weapon...";
}

Weapon::Weapon(std::string weaponType)
{
	type = weaponType;
}

Weapon::~Weapon()
{

}

const std::string	&Weapon::getType()
{
	return (type);
}

void				Weapon::setType(Weapon weapon)
{
	this->type = weapon.type;
	std::cout << type << " has been picked up!" << std::endl;
}

void				Weapon::setType(std::string newType)
{
	this->type = newType;
	std::cout << this->getType() << " has been picked up?" << std::endl;
}
