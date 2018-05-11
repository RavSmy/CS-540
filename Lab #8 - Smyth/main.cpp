// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- main.cpp

#include <iostream>
#include <ctime>
#include "Creature.h"
#include "Demon.h"
#include "Balrogs.h"
#include "Elf.h"
#include "Cyberdemon.h"
#include "Human.h"


int main()
{
	srand(time(0));

	Creature *a[3];
	a[0] = new Balrogs(5,200);
	a[1] = new Elf(5, 300);
	a[2] = new Cyberdemon(100, 100);

	while (a[1]->getHitpoints() > 0 && a[0]->getHitpoints() > 0 && a[2]->getHitpoints() > 0 ) {
		a[1]->setHitpoints(a[1]->getHitpoints() - a[2]->getDamage());
		a[0]->setHitpoints(a[0]->getHitpoints() - a[1]->getDamage());
		a[2]->setHitpoints(a[2]->getHitpoints() - a[0]->getDamage());
	};

	std::cout << "\n\nSCORES\nBalrgo has " << a[0]->getHitpoints()
		<< "\nElf has " << a[1]->getHitpoints() 
		<< "\nCyberdemon has " << a[2]->getHitpoints() << std::endl;
}

