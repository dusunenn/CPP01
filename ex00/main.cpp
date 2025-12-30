/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:15:17 by mdusunen          #+#    #+#             */
/*   Updated: 2025/09/27 18:15:50 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = newZombie("heapZombie");
    heapZombie->announce();
    delete heapZombie;
    std::cout << "***************************************" << std::endl;
    randomChump("stackZombie");
    
    return 0;
}