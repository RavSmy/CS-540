#include <iostream>
#include "Elf.h"
#include "Human.h"
#include "Creature.h"
#include "Demon.h"
#include "Balrogs.h"
#include "Cyberdemon.h"

int main()
{
	Human human1;
	Elf elf1;
	Balrogs balrogs1;
	Cyberdemon cd1;
	
	std::cout << "human1.getDamage(): " << human1.getDamage()
	     << "\nelf1.getDamage(): " << elf1.getDamage()
	     << "\nbalrogs1.getDamage(): " << balrogs1.getDamage()
	     << "\ncyberdemon1.getDamage(): " << cd1.getDamage()
	     << "\n";
}

