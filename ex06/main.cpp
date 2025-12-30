#include "Harl.hpp"

static int get_level_index(std::string level)
{
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return (i);
    }
    return (-1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }

    Harl harl;
    std::string level = argv[1];

    switch (get_level_index(level))
    {
        case 0:
            harl.complain("DEBUG");
            std::cout << std::endl;
            // fall through
        case 1:
            harl.complain("INFO");
            std::cout << std::endl;
            // fall through
        case 2:
            harl.complain("WARNING");
            std::cout << std::endl;
            // fall through
        case 3:
            harl.complain("ERROR");
            std::cout << std::endl;
            break;
        
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return (0);
}