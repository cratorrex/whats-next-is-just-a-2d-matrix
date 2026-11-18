/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seed.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:58:44 by thtay             #+#    #+#             */
/*   Updated: 2026/11/11 16:58:48 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEED_HPP
# define SEED_HPP

# include <iostream>
# include <string>
# include <fstream>
//~~# include <cstdio> // fopen~~// Not allowed since it's a wrapper C funct

class	Seed
{
	private:
		std::ifstream	inFD;
		std::ofstream	outFD;

	public:
		//Seed();
		Seed(std::string filename);
		~Seed();
		int		isOpen();
		void	replace(std::string s1, std::string s2);
};

#endif
