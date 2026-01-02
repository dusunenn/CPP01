/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:53:39 by mdusunen          #+#    #+#             */
/*   Updated: 2026/01/02 16:53:40 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int main(int ac, char **av)
{
    if(ac!= 4)
    {
        std::cout<<"Wrong number of arguments"<<std::endl;
        return 1;
    }
    std::ifstream file(av[1]);
    if(!file.is_open())
    {
        std::cout<<"Could not open the file"<<std::endl;
        return 1;
    }
    std::string s1=av[2];
    std::string s2=av[3];
    if(s1.empty() || s2.empty())
    {
        std::cout<<"Strings must not be empty"<<std::endl;
        return 1;
    }
   
    std::string outFileName = std::string(av[1]) + ".replace";
    std::ofstream outfile(outFileName.c_str());
    if(!outfile.is_open())
    {
        std::cout<<"Could not create the output file"<<std::endl;
        return 1;
    }
    while(!file.eof())
    {
        std::string line;
        std::getline(file,line);
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line;
        if(!file.eof())
            outfile << std::endl;
    }
    file.close();
    outfile.close();
    return 0;
}
