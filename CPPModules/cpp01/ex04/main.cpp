/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:57:52 by thtay             #+#    #+#             */
/*   Updated: 2026/11/11 16:59:50 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seed.hpp"

int	main(int count, char **vectors)
{
	Seed	*sed;

	if (count != 4)
	{
		std::cout << "// Sed for losers //\n\nGuys, this program won't work" <<
		" unless we give it the format\n" << vectors[0] << " [FILE NAME] " <<
		"[STRING TO FIND] [REPLACEMENT STRING]." << std::endl;
		return (0);
	}
	else
	{
		sed = new Seed(vectors[1]);
		if (sed->isOpen())
			sed->replace(vectors[2], vectors[3]);
		delete sed;
	}
}
