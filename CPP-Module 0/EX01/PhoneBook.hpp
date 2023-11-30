/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:59:47 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/16 16:59:47 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> // Include for std::cout, std::cin, std::endl
#include <string> // Include for std::string & c_str
#include <cstdlib> // Include for std::atoi & exit
#include <iomanip> // Include for std::setw
#include "Contact.hpp" // Include for Contact class

class  PhoneBook{
	private:
        Contact cont[8];
	    int		index_of_contact;
	    int		number_of_contacts;
    public:
	    PhoneBook();
	    void	set_indexContact(int nbr_contacts);
        int		get_indexContact();
	    int		get_numberofContact();
	    void	add_contact(std::string temp[5]);
	    void	show_details();
};

#endif