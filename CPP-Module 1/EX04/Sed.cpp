/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <ababdelo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:19:04 by ababdelo          #+#    #+#             */
/*   Updated: 2023/11/30 17:19:04 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string& inFile) : _inFile(inFile) {}

Sed::~Sed() {}

void Sed::replace(const std::string& toFind, const std::string& replaceWith) {
    std::ifstream ifs(this->_inFile.c_str());
    std::ofstream ofs("tempfile");

    if (!ifs || !ofs) {
        std::cerr << "Error opening files." << std::endl;
        exit(1);
    }

    std::string line;
    while (std::getline(ifs, line)) {
        size_t pos = line.find(toFind);
        while (pos != std::string::npos) {
            line.erase(pos, toFind.length());
            line.insert(pos, replaceWith);
            pos = line.find(toFind, pos + replaceWith.length());
        }
        ofs << line << std::endl;
    }

    ifs.close();
    ofs.close();

    // std::string oldFileName = "old_" + this->_inFile;
    // std::rename(this->_inFile.c_str(), oldFileName.c_str());
    std::remove(this->_inFile.c_str());
    std::rename("tempfile", this->_inFile.c_str());
    std::cout << "Replacement completed successfully." << std::endl;
}
