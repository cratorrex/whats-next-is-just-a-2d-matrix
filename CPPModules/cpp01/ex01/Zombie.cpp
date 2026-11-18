/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:33:07 by thtay             #+#    #+#             */
/*   Updated: 2026/11/03 15:33:08 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string giveName)
{
	name = giveName;
	std::cout << "A zombie is rising from the grave..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie '" << name << "' has decomposed." << std::endl;
}

//
Zombie::Zombie()
{
	name = "NoName";
	std::cout << "A zombie is rising from the grave..." << std::endl;
}

void	Zombie::nameZombie(std::string giveName)
{
	name = giveName;
}

//
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
