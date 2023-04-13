#include   "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType();
	std::cout << std::endl;
}