#include <iostream>
#include <string>
#include "Harl.hpp"


int main()
{
    Harl Harl;
    Harl.complain("DEBUG");
    Harl.complain("INFO");
    Harl.complain("WARNING");
    Harl.complain("ERROR");
    Harl.complain("AAAAAAAAAAAAAA--AAA-A-A-A-A-A-A-A-A-A-A-A!!!!!!!!!");
    return 0;
}