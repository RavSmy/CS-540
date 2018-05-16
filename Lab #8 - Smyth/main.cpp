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
	
	Creature *a[4];
	a[0] = new (std::nothrow) Balrogs(3,100);
	a[1] = new (std::nothrow) Elf(5, 100);
	a[2] = new (std::nothrow) Cyberdemon(10, 100);
	a[3] = new (std::nothrow) Human(20, 100);

	if (a[0] != nullptr && a[1] != nullptr && a[2] != nullptr && a[3] != nullptr) {
		
		int i = 0;
		while (a[1]->getHitpoints() > 0 && a[0]->getHitpoints() > 0 && a[2]->getHitpoints() > 0 && a[3]->getHitpoints() > 0 ) {
			a[i%4]->setHitpoints(a[i%4]->getHitpoints() - a[(rand() % 4)]->getDamage());
			i++; 
		};

		std::cout << "\n\nSCORES\nBalrog has " << a[0]->getHitpoints()
			<< "\nElf has " << a[1]->getHitpoints() 
			<< "\nCyberdemon has " << a[2]->getHitpoints() 
			<< "\nHuman has " << a[3]->getHitpoints() << std::endl;
	}

	// Free Pointer
	for (int i = 0 ; i < 4; i++) {		
		delete a[i]; 
		a[i] = nullptr; }
}
