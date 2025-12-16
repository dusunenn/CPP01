#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int ac, char **av)
{
    int levelIndex ;
    Harl harl;
    if (ac == 2)
    {
        levelIndex = atoi(av[1]);
        switch (levelIndex)
        {
        case 1:
            harl.complain("DEBUG");
            // fall through
        case 2:
            harl.complain("INFO");
            // fall through
        case 3:
            harl.complain("WARNING");
            // fall through
        case 4:
            harl.complain("ERROR");
            break;  
        default:
            std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
            std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
            std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
            std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
            std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
            break;
        }
    }
    else{
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
    }
    return 0;
}