/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:19:15 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 17:19:15 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <to_find> <replace>" << std::endl;
        return 1;
    }

    Sed sed(argv[1]);
    sed.replace(argv[2], argv[3]);

    return 0;
}
