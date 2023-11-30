/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:33:34 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 17:33:34 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nick_name = "";
    darkest_secret = "";
    phone_number = "";
    contact_index = 0;
}
    
std::string Contact::get_first_name()
{
    return (first_name);
}

std::string Contact::get_last_name()
{
    return (last_name);
}

std::string Contact::get_nick_name()
{
    return (nick_name);
}

std::string Contact::get_darkest_secret()
{
    return (darkest_secret);
}
std::string Contact::get_phone_number()
{
    return (phone_number);
}

int Contact::get_index()
{
    return (contact_index);
}

void	Contact::set_first_name(std::string fst_name)
{
    first_name = fst_name;
}

void	Contact::set_last_name(std::string lst_name)
{
    last_name = lst_name;
}

void	Contact::set_nick_name(std::string nk_name)
{
    nick_name = nk_name;
}

void	Contact::set_darkest_secret(std:: string drk_secret)
{
    darkest_secret = drk_secret;
}

void	Contact::set_phone_number(std::string phone_nbr)
{
    phone_number = phone_nbr;
}

void	Contact::set_index(int index)
{
    contact_index = index;
}