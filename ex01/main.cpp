/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:44:51 by mdusunen          #+#    #+#             */
/*   Updated: 2026/01/02 16:54:04 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NUM_ZOMBIES 7

int	main()
{
	Zombie	*horde = zombieHorde(NUM_ZOMBIES, "Horde Member");;

	if (horde == NULL)
		return (1);
	for (int i = 0; i < NUM_ZOMBIES; ++i)
		horde[i].announce();
	delete[] horde;
	return (1);
}