/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:57:40 by thtay             #+#    #+#             */
/*   Updated: 2026/10/19 16:57:41 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/////////////////////////////////////////////////////////////////////
//                                                                //
//	Interpretation of the example(s):                            //
//                                                              //
//	Print all the given arguments.                             //
//	There are no spaces in between the given arguments.       //
//	If no argument is specified, use a default option.       //
//                                                          //\\
///////////////////////////////////////////////////////////////\\
////     //      //      //      //      //      //      //     \\
/// //      //      //      //      //      //      //      //   \\
//     //      //      //      //      //      //      //      // \\
/////////////////////////////////////////////////////////////////////
//                                                                //
//  Understandings:                                              //
//                                                              //
//  <iostream> is NOT an external library.                     //
//                                                            //
//  NO MORE NORMINETTE (so no need to follow most of norm)    \\
//  At least... according to my peers... no more norm...       \\
//                                                              \\
//  C++11 is not allowed, as such, to_string is invalid.         \\
//                                                                \\
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int	main(int count, char **vectors)
{
	int	i;

	i = 0;
	if (count <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	else
	{
		for (int i = 1; vectors[i]; i++)
			for (int j = 0; vectors[i][j]; j++)
				std::cout << static_cast<char>(std::toupper(vectors[i][j]));
		std::cout << std::endl;
	}
}
	