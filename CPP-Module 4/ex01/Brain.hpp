/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 03:30:36 by ababdelo          #+#    #+#             */
/*   Updated: 2024/02/11 03:32:28 by ababdelo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(); /*Default Constructor*/
	Brain(const Brain &obj);/*Copy Constructor*/
	Brain &operator=(const Brain &obj);/*Copy Assignement Operator*/
	~Brain(); /*Destructor*/
};

#endif