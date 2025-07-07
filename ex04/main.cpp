/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshcherb <pshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:45:32 by pshcherb          #+#    #+#             */
/*   Updated: 2025/07/07 21:03:35 by pshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    char* filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ofstream out;
    out.open("out.txt");
    
    std::ifstream in;
    in.open(filename);

    if (out.is_open() && in.is_open()){
        std::string line;
        while (std::getline(in, line))
        {
            out << line << std::endl;
        }
    }
        
    return (0);
}