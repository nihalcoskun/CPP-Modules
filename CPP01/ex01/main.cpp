#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(3, "Little Zombie");
    for(int i = 0; i < 3; i++)
    {
        zombies[i].announce();
    }

    delete[] zombies;
    return(0);
}