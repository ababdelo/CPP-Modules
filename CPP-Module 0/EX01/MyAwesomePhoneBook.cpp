/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:57:46 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:46 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_valid(const std::string tmp[5]) {
	for (int i = 0; i < 5; i++) {
		switch (i) {
			case 0:
				if (tmp[i].empty() || !std::isalpha(tmp[i][0])) {
					std::cout << "  [x] Error: invalid first name" << std::endl;
					return -1;
				}
				break;
			case 1:
				if (tmp[i].empty() || !std::isalpha(tmp[i][0])) {
					std::cout << "  [x] Error: invalid last name" << std::endl;
					return -1;
				}
				break;
			case 2:
				if (tmp[i].empty() || !std::isalpha(tmp[i][0])) {
					std::cout << "  [x] Error: invalid nick name" << std::endl;
					return -1;
				}
				break;
			case 3:
				if (tmp[i].empty() || !std::isalnum(tmp[i][0])) {
					std::cout << "  [x] Error: invalid darkest secret" << std::endl;
					return -1;
				}
				break;
			case 4:
				if (tmp[i].empty() || !std::isdigit(tmp[i][0])) {
					std::cout << "  [x] Error: invalid phone number" << std::endl;
					return -1;
				}
				break;
		}
	}
	return 0;
}

std::string* get_data(std::string tmp[5]) { 
	std::cout << std::left;
	std::cout << std::setw(21) << "      [-] Enter First Name" << " : ";
	if (!std::getline(std::cin, tmp[0])) {
		std::cout << "EoF" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "      [-] Enter Last Name" << " : ";
	if (!std::getline(std::cin, tmp[1])) {
		std::cout << "EoF" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "      [-] Enter Nick Name" << " : ";
	if (!std::getline(std::cin, tmp[2])) {
		std::cout << "EoF" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "      [-] Enter Darkest Secret" << " : ";
	if (!std::getline(std::cin, tmp[3])) {
		std::cout << "EoF" << std::endl;
		exit(0);
	}
	std::cout << std::setw(21) << "      [-] Enter Phone Number" << " : ";
	if (!std::getline(std::cin, tmp[4])) {
		std::cout << "EoF" << std::endl;
		exit(0);
	}
	return tmp;
}

int main() {
	PhoneBook phonebook;

	std::string cmd;
	std::string tmp[5];

	while (true) {
		std::cout << "\n[#] Enter [ADD, SEARCH, EXIT] :" << std::endl;
		std::cout << "   [+] ";
		if (!std::getline(std::cin, cmd)) {
			std::cout << "EoF" << std::endl;
			exit(0);
		}
		if (cmd == "ADD") {
			std::string* tmp_ptr = get_data(tmp);
			if (check_valid(tmp_ptr) == 0)
				phonebook.add_contact(tmp_ptr);
		} else if (cmd == "SEARCH") {
			phonebook.show_details();
		} else if (cmd == "EXIT") {
			break;
		}
	}
	return 0;
}