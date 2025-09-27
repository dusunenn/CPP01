#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "Zombie " << name << " created." << std::endl;
}
