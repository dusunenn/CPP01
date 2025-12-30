/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:15:02 by mdusunen          #+#    #+#             */
/*   Updated: 2025/09/27 18:15:58 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " constructor called." << std::endl;
    // İsteğe bağlı: Oluşturulduğunda mesaj basabilirsin ama zorunlu değil.
}

Zombie::~Zombie() {
    // Zombi yok edildiğinde bu çalışır.
    std::cout << this->_name << " is destroyed." << std::endl; // 
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
