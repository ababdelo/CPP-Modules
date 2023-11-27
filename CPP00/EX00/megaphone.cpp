/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:23:58 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/14 14:23:58 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int j = 1; j < argc; j++)
		{
			std::string str;
			str = argv[j];
			for (size_t c = 0; c < str.length(); c++)
				str[c] = toupper(str[c]);
			std::cout << str;
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
}