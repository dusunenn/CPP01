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
    Zombie *zombie1 = newZombie("Zombie1");
    Zombie *zombie2 = newZombie("Zombie2");

    zombie1->announce();
    zombie2->announce();
    randomChump("Zombie3");
    delete zombie1;
    delete zombie2;

    return 0;
}