/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:19:39 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 17:19:39 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed {
    private:
        std::string _inFile;
    public:
        Sed(const std::string& inFile);
        ~Sed();

        void replace(const std::string& toFind, const std::string& replaceWith);
};

#endif
