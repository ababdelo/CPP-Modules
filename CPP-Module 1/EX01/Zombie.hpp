/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:49:11 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 16:49:11 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void    announce( void );
    Zombie* newZombie( std::string name );
    void    setName( std::string name );

};

Zombie*    zombieHorde( int N, std::string name );

#endif // ZOMBIE_HPP