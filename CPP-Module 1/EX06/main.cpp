/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:44:20 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 17:44:20 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av ) {

    if (ac != 2) {
        return (std::cout << "Usage: ./harlFilter \"level\"\n", 1);
    }
    std::string input = av[1];
    Harl        harl;

    harl.complain(input);

    return 0;
}