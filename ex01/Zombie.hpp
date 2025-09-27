/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:41:02 by mdusunen          #+#    #+#             */
/*   Updated: 2025/09/27 18:45:18 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class Zombie
{
private:
	std::string name;

public:
    Zombie(std::string n);
    ~Zombie();
	void announce();
};

Zombie *newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
#endif