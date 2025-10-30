#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

//constructor 'da silah olmaz
//Bazen silahı olmayabilir;
//Pointer kullanılmalı(Çünkü NULL olabilir);
//Pointer'lar "*" ile tanımlanır
//NULL olabilir(bir şeyi göstermeyeblir);
//Sonradan başka bir nesneyi gösterecek sekilde değiştirilebilir;

class HumanB{
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack();
};

#endif