#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string n) : name(n){}
	void announce() const {
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}	
};
