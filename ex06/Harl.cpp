#include "Harl.hpp"

void Harl::complain(std::string level)
{
    switch (level)
    {
    case "DEBUG":
        std::cout << "[ DEBUG ]" << std::endl;
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
        break;
    
    default:
        break;
    }
}