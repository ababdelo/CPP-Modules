/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:06:06 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 08:06:17 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor for Brain is called !" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "Copy Constructor for Brain is called !" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain is called!" << std::endl;
}

Brain & Brain::operator=(const Brain &obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	std::cout << "Assignement opperator for Brain is called !" << std::endl;
	return *this;
}