/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdusunen <mdusunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:15:15 by mdusunen          #+#    #+#             */
/*   Updated: 2025/12/15 16:42:48 by mdusunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// Heap üzerinde yer ayırıyoruz.
// Biz 'delete' diyene kadar bu zombi hafızada kalacak

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}