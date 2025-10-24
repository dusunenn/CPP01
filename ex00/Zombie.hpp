/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:15:20 by mdusunen          #+#    #+#             */
/*   Updated: 2025/10/24 18:52:26 by mdusunen         ###   ########.fr       */
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
	Zombie(std::string n) : name(n) {}
	~Zombie() {}
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif