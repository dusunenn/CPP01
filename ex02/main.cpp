/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:53:23 by mdusunen          #+#    #+#             */
/*   Updated: 2026/01/02 16:54:13 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string string = "Hİ THİS İS BRAİN";

    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string is : " << &string << std::endl;
    std::cout << "str pointer is: " << stringPTR << std::endl;
    std::cout << "str referance is : " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "value string is : " << string << std::endl;
    std::cout << "value stringPTR is: " << *stringPTR << std::endl;
    std::cout << "value stringREF is : " << stringREF << std::endl;
}