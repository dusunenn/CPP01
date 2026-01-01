#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL; // Başlangıçta silahı yok.
}

// HumanB::HumanB(std::string name): name(name), weapon(NULL)
// {
// }

HumanB::~HumanB()
{
}

// Gelen referansın ADRESİNİ (& operatörü ile) alıp pointer'a atıyoruz.
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    // Silahı var mı kontrolü yapmak iyi bir pratiktir (Segfault önler)
    if (this->weapon != NULL)
    {
        // Pointer olduğu için "->" operatörü kullanılır
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " has no weapon!" << std::endl;
    }
}