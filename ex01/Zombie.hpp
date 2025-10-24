/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:41:02 by mdusunen          #+#    #+#             */
/*   Updated: 2025/10/24 19:41:46 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;
    
public:
    Zombie(){};

    ~Zombie(){};

    void announce();
    void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif