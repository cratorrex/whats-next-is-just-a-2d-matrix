/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:51:40 by thtay             #+#    #+#             */
/*   Updated: 2026/11/06 19:51:41 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();	//somehow required a default constr ok... now what
		Weapon(std::string weaponType);
		~Weapon();
		const std::string	&getType();
		void				setType(std::string newType);
		void				setType(Weapon weapon);
};

#endif
