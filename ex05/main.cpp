#include <iostream>
#include <string>
#include "Harl.hpp"


int main(int ac, char **av)
{
    (void)av;
    if (ac == 1)
    {
        std::cerr <<  "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!!!!!!!" << std::endl;
        return(0);
    }
    Harl Harl;
    Harl.complain("DEBUG");
    Harl.complain("INFO");
    Harl.complain("WARNING");
    Harl.complain("ERROR");
    return 0;
}