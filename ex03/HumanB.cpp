#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB:: attack(){
    std::cout << name << " attack with their" << weapon->getType() << std::endl;
}