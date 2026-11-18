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

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie* hello = newZombie("Hello");
	hello->announce();
	randomChump("World");
	delete hello;
	hello = NULL;
	return 0;
}

/*********\\\____________________________________________________________\\\**/
/*********///                                                            ///**/
/********///  how this works is interesting...                          ///***/
/*******///  but basically this module teaches about the new keyword   ///****/
/******///  and also the delete keyword.                              ///*****/
/*****///  what these keywords mean is basically given the object,   ///******/
/****///  allocate a new instance that can be freely utilized       ///*******/
/***///  until its need is finished, and they are then destroyed.  ///********/
/**///____________________________________________________________///*********/
/**\\\                                                            \\\*********/
/***\\\  notwithstanding though, the exercise's main aim is to     \\\********/
/****\\\  help differentiate and accustom us to how memory may      \\\*******/
/*****\\\  be allocated going forward. if it's used for a short      \\\******/
/******\\\  time, or for a wider purpose.                             \\\*****/
/*******\\\____________________________________________________________\\\****/
/*******///                                                            ///****/
