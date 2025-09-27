/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:44:51 by mdusunen          #+#    #+#             */
/*   Updated: 2025/09/27 18:44:57 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}