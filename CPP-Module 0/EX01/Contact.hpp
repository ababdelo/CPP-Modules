/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:58:02 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/16 16:58:02 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
	private:
		std::string	first_name;
        std::string	last_name;
        std::string	nick_name;
        std::string	darkest_secret;
        std::string	phone_number;
        int			contact_index; // index of the contact in the phonebook
    public:
        Contact(); // Constructor
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_darkest_secret();
        std::string get_phone_number();
        int			get_index(); // index of the contact in the phonebook
        void		set_first_name(std::string fst_name);
        void		set_last_name(std::string lst_name);
        void		set_nick_name(std::string nk_name);
        void		set_darkest_secret(std:: string drk_secret);
        void		set_phone_number(std::string phone_nbr);
        void		set_index(int index);
};

#endif