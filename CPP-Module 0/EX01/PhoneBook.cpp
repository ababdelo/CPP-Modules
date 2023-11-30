/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:30:02 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/16 17:30:02 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	index_of_contact = 0;
	number_of_contacts = 0;
}

void PhoneBook::set_indexContact(int nbr_contacts)
{
	number_of_contacts = nbr_contacts;
}

int PhoneBook::get_indexContact()
{
	return (index_of_contact);
}

int PhoneBook::get_numberofContact()
{
	return (number_of_contacts);
}

void PhoneBook::add_contact(std::string temp[5])
{
	if (index_of_contact > 7)
		index_of_contact = 0;
	cont[index_of_contact].set_first_name(temp[0]);
	cont[index_of_contact].set_last_name(temp[1]);
	cont[index_of_contact].set_nick_name(temp[2]);
	cont[index_of_contact].set_darkest_secret(temp[3]);
	cont[index_of_contact].set_index(index_of_contact);
	cont[index_of_contact++].set_phone_number(temp[4]);
	if (number_of_contacts < 8)
		number_of_contacts++;
}

void ft_print(std::string str)
{
	if (str.length() > 9)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;
}


void PhoneBook::show_details()
{
	std::string index_contact;
	int i;

	std::cout << "\n+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (i = 0; i < number_of_contacts; i++)
	{
		std::cout << std::right;
		std::cout << "|" << std::setw(10) << i << "|";
		ft_print(cont[i].get_first_name());
		std::cout << "|";
		ft_print(cont[i].get_last_name());
		std::cout << "|";
		ft_print(cont[i].get_nick_name());
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+\n" << std::endl;
	std::cout << "   [-] Enter contact index : ";
	if (!getline(std::cin, index_contact))
	{
		std::cout << "EoF" << std::endl;
		exit(0);
	}
	std::string::size_type j = 0;
	for (; std::isdigit(index_contact[j]) && j < index_contact.size(); j++);
	if (j != index_contact.size())
		std::cout << "      [x] Unvalid index" << std::endl;
	else
	{
		if (index_contact.length() > 1 || atoi(index_contact.c_str()) > 8 || atoi(index_contact.c_str()) < 0)
		{
			std::cout << "      [x] Unvalid index" << std::endl;
		}
		else
		{
			const char *cstr = index_contact.c_str();
			i = std::atoi(cstr);

			if (i >= number_of_contacts)
			{
				if (number_of_contacts > 0)
					std::cout << "      [x] The index must be between 0 and " << number_of_contacts - 1 << std::endl;
				else
					std::cout << "      [x] No contact has been found" << std::endl;
			}
			else
			{
				std::cout << std::left;
				std::cout << "\n+-------------------------------------------+" << std::endl;
				std::cout << "|                 Contact: " << i << "                |" << std::endl;
				std::cout << "+-------------------------------------------+" << std::endl;
				std::cout << "   " << std::setw(21) << "First Name"
							<< " : " << cont[i].get_first_name() << std::endl;
				std::cout << "   " << std::setw(21) << "Last Name"
							<< " : " << cont[i].get_last_name() << std::endl;
				std::cout << "   " << std::setw(21) << "Nick Name"
							<< " : " << cont[i].get_nick_name() << std::endl;
				std::cout << "   " << std::setw(21) << "Darkest Secret"
							<< " : " << cont[i].get_darkest_secret() << std::endl;
				std::cout << "   " << std::setw(21) << "Phone Number"
							<< " : " << cont[i].get_phone_number() << std::endl;
				std::cout << "+-------------------------------------------+\n" << std::endl;
			}
		}
	}
}