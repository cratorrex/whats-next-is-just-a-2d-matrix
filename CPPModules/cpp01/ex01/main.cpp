/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:32:04 by thtay             #+#    #+#             */
/*   Updated: 2026/11/03 15:32:06 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int main(void)
{
	int		n = 5;
	Zombie	*horde = zombieHorde(n, "BrAinHunTerZ");

	for (int i = 0; i < n; i ++)
	{
		horde[i].announce();
	}
	delete[] horde;
	horde = NULL;
	return 0;
}
