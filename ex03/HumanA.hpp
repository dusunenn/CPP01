#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>


//Constructor'da silah olmalı;
//Her zamansilahı olmalı;
//Referans kullanılmalı(çünkü her zaman silahı var.);
//Referanslar "&" ile tanımlanır ve asla NULL olamaz
//Referanslar tanımlanırken değeri olmalı;

class HumanA
{
private:
    std::string name;
    Weapon& weapon;  // REFERENCE - & işaretine dikkat!

public:
    HumanA(std::string name, Weapon& weapon);  // Constructor'da weapon alır
    ~HumanA();
    void attack();
};

#endif