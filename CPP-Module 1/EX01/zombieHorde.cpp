/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:49:16 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 16:49:16 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
    Zombie *zombiz = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombiz[i].setName(name);
    }
    return zombiz;
}