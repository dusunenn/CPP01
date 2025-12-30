#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

// PDF: Returns a constant reference to type 
const std::string& Weapon::getType(void) const
{
    return (this->_type);
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}